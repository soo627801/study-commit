import numpy as np
import math
import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d.art3d import Poly3DCollection

# rotation mat.
def rotation_matrix_z(angle):
    rad = np.radians(angle)
    return np.array([[np.cos(rad), -np.sin(rad), 0],
                     [np.sin(rad), np.cos(rad), 0],
                     [0, 0, 1]])

def rotation_matrix_y(angle):
    rad = np.radians(angle)
    return np.array([[np.cos(rad), 0, -np.sin(rad)],
                     [0, 1, 0],
                     [np.sin(rad), 0, np.cos(rad)]])

# Inverse kinematics
def IK(x, y):
    a1 = 3
    a2 = 2

    #distance = np.sqrt(x**2 + y**2)
    c2 = (x**2 + y**2 - a1**2 - a2**2) / (2 * a1 * a2)
    c2 = np.clip(c2, -1, 1)
    s2 = np.sqrt(1 - c2**2)
    theta2 = np.arctan2(s2, c2)

    k1 = a1 + a2 * np.cos(theta2)
    k2 = a2 * np.sin(theta2)
    theta1 = np.arctan2(y, x) - np.arctan2(k2, k1)

    return np.degrees(theta1), np.degrees(theta2)

def plot_cylinder(ax, length, radius, transform_matrix, offset):
    z = np.linspace(0, length, 50)
    theta = np.linspace(0, 2 * np.pi, 50)
    theta_grid, z_grid = np.meshgrid(theta, z)

    x_grid = radius * np.cos(theta_grid)
    y_grid = radius * np.sin(theta_grid)

    points = np.vstack([x_grid.flatten(), y_grid.flatten(), z_grid.flatten()])
    transformed_points = transform_matrix @ points
    x_transformed = transformed_points[0, :] + offset[0]
    y_transformed = transformed_points[1, :] + offset[1]
    z_transformed = transformed_points[2, :] + offset[2]

    ax.plot_surface(x_transformed.reshape(x_grid.shape), 
                    y_transformed.reshape(x_grid.shape), 
                    z_transformed.reshape(x_grid.shape), color='g', alpha=0.6)

def plot_cube(ax, vertices):
    faces = [[vertices[j] for j in [0, 1, 5, 4]], [vertices[j] for j in [7, 6, 2, 3]], 
             [vertices[j] for j in [0, 3, 7, 4]], [vertices[j] for j in [1, 2, 6, 5]], 
             [vertices[j] for j in [0, 1, 2, 3]], [vertices[j] for j in [4, 5, 6, 7]]]

    ax.add_collection3d(Poly3DCollection(faces, facecolors='red', linewidths=1, edgecolors='red', alpha=.25))

def cal_force(theta1, theta2, weight):
    Fx = weight * np.cos(np.radians(theta1))
    Fy = weight * np.sin(np.radians(theta1))
    return Fx, Fy

def cal_torque(theta1, theta2, Fx, Fy, a1=3, a2=2):
    torque1 = Fx * a1 * np.cos(np.radians(theta1)) + Fy * a1 * np.sin(np.radians(theta1))
    torque2 = Fx * a2 * np.cos(np.radians(theta2)) + Fy * a2 * np.sin(np.radians(theta2))
    return torque1, torque2

def Display3D(theta1, theta2):
    ax.cla() 
    ax.set_xlim([-5, 5])
    ax.set_ylim([-5, 5])
    ax.set_zlim([0, 10])
    ax.set_xlabel('X axis')
    ax.set_ylabel('Y axis')
    ax.set_zlabel('Z axis')

    rotation1 = rotation_matrix_z(theta1)
    plot_cylinder(ax, length=3, radius=0.5, transform_matrix=rotation1, offset=[0, 0, 0])

    offset = rotation1 @ np.array([0, 0, 3]) 
    initial_rotation2 = rotation_matrix_y(90)  
    additional_rotation2 = rotation_matrix_y(theta2) 
    plot_cylinder(ax, length=2, radius=0.5, transform_matrix=rotation1 @ initial_rotation2 @ additional_rotation2, offset=offset)

    vertices = np.array([[1, 1, 1], [1, 2, 1], [2, 2, 1], [2, 1, 1],
                     [1, 1, 2], [1, 2, 2], [2, 2, 2], [2, 1, 2]])

    plot_cube(ax, vertices)

    plt.draw()

# 시뮬레이션 실행
fig = plt.figure()
ax = fig.add_subplot(111, projection='3d')

Display3D(10.58, 156.44)

theta1, theta2 = IK(1, 1)
weight = 5
Fx, Fy = cal_force(theta1, theta2, weight)
print(f"x 방향 힘 : {Fx} N")
print(f"y 방향 힘 : {Fy} N")

torque1, torque2 = cal_torque(theta1, theta2, Fx, Fy)
print(f"첫 번째 관절 토크 : {torque1} Nm")
print(f"두 번째 관절 토크 : {torque2} Nm")

plt.show()