import numpy as np
import math
import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d.art3d import Poly3DCollection
from matplotlib.widgets import Slider
from matplotlib import rc
rc('font', family='AppleGothic')
plt.rcParams['axes.unicode_minus'] = False

# rotation mat
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

# newton-euler
def newton_euler(F, T, m, I, omega, alpha, dt=0.1):
    a = F / m  
    alpha_new = np.linalg.inv(I) @ (T - np.cross(omega, I @ omega))     # alpha : 각가속도
    omega_new = omega + alpha_new * dt                                  # omega : 각속도
    return a, alpha_new, omega_new

# Inverse Kinematics
def IK(x, y):
    a1 = 9          # 첫 번째 팔 길이 9로 설정
    a2 = 7          # 두 번째 팔 길이 7로 설정
    c2 = (x**2 + y**2 - a1**2 - a2**2) / (2 * a1 * a2)
    c2 = np.clip(c2, -1, 1)
    s2 = np.sqrt(1 - c2**2)
    theta2 = np.arctan2(s2, c2)
    k1 = a1 + a2 * np.cos(theta2)
    k2 = a2 * np.sin(theta2)
    theta1 = np.arctan2(y, x) - np.arctan2(k2, k1)
    return np.degrees(theta1), np.degrees(theta2)

def plot_line(ax, start, end, color='g', linewidth=2):
    ax.plot([start[0], end[0]], [start[1], end[1]], [start[2], end[2]], color=color, linewidth=linewidth)

def plot_cube(ax, vertices):
    faces = [[vertices[j] for j in [0, 1, 5, 4]], [vertices[j] for j in [7, 6, 2, 3]],
             [vertices[j] for j in [0, 3, 7, 4]], [vertices[j] for j in [1, 2, 6, 5]],
             [vertices[j] for j in [0, 1, 2, 3]], [vertices[j] for j in [4, 5, 6, 7]]]
    ax.add_collection3d(Poly3DCollection(faces, facecolors='red', linewidths=1, edgecolors='red', alpha=.25))

def cal_force(theta1, theta2, weight):
    Fx = weight * np.cos(np.radians(theta1))
    Fy = weight * np.sin(np.radians(theta1))
    return Fx, Fy

def cal_torque(theta1, theta2, Fx, Fy, a1=9, a2=7):
    torque1 = Fx * a1 * np.cos(np.radians(theta1)) + Fy * a1 * np.sin(np.radians(theta1))
    torque2 = Fx * a2 * np.cos(np.radians(theta2)) + Fy * a2 * np.sin(np.radians(theta2))
    return torque1, torque2

def Display3D(theta1, theta2, omega, alpha):
    ax.cla()
    ax.set_xlim([-7, 7])
    ax.set_ylim([-7, 7])
    ax.set_zlim([0, 15])
    ax.set_xlabel('X 축')
    ax.set_ylabel('Y 축')
    ax.set_zlabel('Z 축')
    
    base = np.array([0, 0, 0])
    joint1 = rotation_matrix_z(theta1) @ np.array([0, 0, 9])
    joint2 = joint1 + rotation_matrix_z(theta1) @ rotation_matrix_y(90) @ rotation_matrix_y(theta2) @ np.array([0, 0, 7])
    
    plot_line(ax, base, joint1)
    plot_line(ax, joint1, joint2)
    
    box_offset = joint2 + rotation_matrix_z(theta1) @ rotation_matrix_y(90) @ rotation_matrix_y(theta2) @ np.array([0.5, 0, 0])
    box_vertices = np.array([[-0.5, -0.5, -0.5], [-0.5, 0.5, -0.5], [0.5, 0.5, -0.5], [0.5, -0.5, -0.5],
                             [-0.5, -0.5, 0.5], [-0.5, 0.5, 0.5], [0.5, 0.5, 0.5], [0.5, -0.5, 0.5]]) + box_offset
    plot_cube(ax, box_vertices)
    plt.draw()

def update(val):
    global omega, alpha, Fx, Fy, torque1, torque2
    theta1 = slider1.val
    theta2 = slider2.val
    
    Fx, Fy = cal_force(theta1, theta2, weight)
    torque1, torque2 = cal_torque(theta1, theta2, Fx, Fy)

    F = np.array([Fx, Fy, 0])
    T = np.array([torque1, torque2, 0])
    I = np.eye(3)  
    m = 1  
    _, alpha, omega = newton_euler(F, T, m, I, omega, alpha)
    
    Display3D(theta1, theta2, omega, alpha)
    
    fig.texts = []  
    fig.text(0.75, 0.50, f'x 방향 힘 : {Fx} N', fontsize=9, color='black')
    fig.text(0.75, 0.45, f'y 방향 힘 : {Fy} N', fontsize=9, color='black')
    fig.text(0.75, 0.40, f'첫 번째 관절 토크 : {torque1} Nm', fontsize=9, color='black')
    fig.text(0.75, 0.35, f'두 번째 관절 토크 : {torque2} Nm', fontsize=9, color='black')
    fig.text(0.75, 0.30, f'각속도 : {omega} rad/s', fontsize=9, color='black')
    fig.text(0.75, 0.25, f'각가속도 : {alpha} rad/s^2', fontsize=9, color='black')

omega = np.zeros(3)  
alpha = np.zeros(3)  
fig = plt.figure()
ax = fig.add_subplot(111, projection='3d')
Display3D(0, 0, omega, alpha)

axcolor = 'lightgoldenrodyellow'
slider1_ax = plt.axes([0.8, 0.60, 0.15, 0.03], facecolor=axcolor)
slider2_ax = plt.axes([0.8, 0.55, 0.15, 0.03], facecolor=axcolor)
slider1 = Slider(slider1_ax, 'J1', 0, 270, valinit=0)
slider2 = Slider(slider2_ax, 'J2', 0, 120, valinit=0)
slider1.on_changed(update)
slider2.on_changed(update)

theta1, theta2 = IK(1, 1)
weight = 5
Fx, Fy = cal_force(theta1, theta2, weight)
print(f"x 방향 힘 : {Fx} N")
print(f"y 방향 힘 : {Fy} N")
torque1, torque2 = cal_torque(theta1, theta2, Fx, Fy)
print(f"첫 번째 관절 토크 : {torque1} Nm")
print(f"두 번째 관절 토크 : {torque2} Nm")

# 힘, 토크, 각속도, 각가속도 값 출력
fig.text(0.75, 0.50, f'x 방향 힘 : {Fx} N', fontsize=9, color='black')
fig.text(0.75, 0.45, f'y 방향 힘 : {Fy} N', fontsize=9, color='black')
fig.text(0.75, 0.40, f'첫 번째 관절 토크 : {torque1} Nm', fontsize=9, color='black')
fig.text(0.75, 0.35, f'두 번째 관절 토크 : {torque2} Nm', fontsize=9, color='black')
fig.text(0.75, 0.30, f'각속도 : {omega} rad/s', fontsize=9, color='black')
fig.text(0.75, 0.25, f'각가속도 : {alpha} rad/s^2', fontsize=9, color='black')

plt.show()