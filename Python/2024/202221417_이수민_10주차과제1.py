import numpy as np
import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d import Axes3D, art3d
from matplotlib.animation import FuncAnimation
from matplotlib import rc

rc('font', family='AppleGothic')
plt.rcParams['axes.unicode_minus'] = False

l1, l2 = 0.5, 0.35 
m1, m2 = 1, 0.8    
box_size = 0.1      
g = 9.81            
theta1 = 15         

target_position = np.array([0.5, 0, box_size / 2])

def calculate_max_load():
    max_torque_1 = m1 * g * (l1 / 2)
    max_torque_2 = m2 * g * (l2 / 2)
    max_load = min(max_torque_1 / (l1 * g), max_torque_2 / (l2 * g))
    return max_load

def calculate_positions(theta1, extension, lift_height):
    base = np.array([0, 0, 0])
    joint1 = base + np.array([l1 * np.cos(np.radians(theta1)), l1 * np.sin(np.radians(theta1)), 0])
    joint2 = joint1 + np.array([extension * np.cos(np.radians(theta1)), extension * np.sin(np.radians(theta1)), lift_height])
    return base, joint1, joint2

fig = plt.figure()
ax = fig.add_subplot(111, projection='3d')
ax.set_xlim([-1, 1])
ax.set_ylim([-1, 1])
ax.set_zlim([0, 1])
ax.set_xlabel('X 축')
ax.set_ylabel('Y 축')
ax.set_zlabel('Z 축')

def draw_box(ax, box_position, lift_height):
    box_position[2] += lift_height  
    box_vertices = [
        box_position + np.array([dx, dy, dz])
        for dx, dy, dz in zip(
            [box_size/2, -box_size/2, -box_size/2, box_size/2, box_size/2, -box_size/2, -box_size/2, box_size/2],
            [box_size/2, box_size/2, -box_size/2, -box_size/2, box_size/2, box_size/2, -box_size/2, -box_size/2],
            [box_size/2, box_size/2, box_size/2, box_size/2, -box_size/2, -box_size/2, -box_size/2, -box_size/2]
        )
    ]
    edges = [[box_vertices[j] for j in [0, 1, 2, 3, 0]], [box_vertices[j] for j in [4, 5, 6, 7, 4]],
             [box_vertices[j] for j in [0, 3, 7, 4, 0]], [box_vertices[j] for j in [1, 2, 6, 5, 1]]]
    for edge in edges:
        ax.add_collection3d(art3d.Poly3DCollection([edge], color='gray', alpha=0.5, edgecolor='black'))

def update(frame):
    ax.cla()
    ax.set_xlim([-1, 1])
    ax.set_ylim([-1, 1])
    ax.set_zlim([0, 1])
    ax.set_xlabel('X 축')
    ax.set_ylabel('Y 축')
    ax.set_zlabel('Z 축')

    if frame < 50:
        lift_height = 0  
        extension = frame * (l2 / 50)  
    else:
        lift_height = (frame - 50) * 0.01  
        extension = l2

    base, joint1, joint2 = calculate_positions(theta1, extension, lift_height)

    ax.plot([base[0], joint1[0]], [base[1], joint1[1]], [base[2], joint1[2]], color='blue', linewidth=3)
    ax.plot([joint1[0], joint2[0]], [joint1[1], joint2[1]], [joint1[2], joint2[2]], color='red', linewidth=3)

    draw_box(ax, target_position.copy(), lift_height)

max_load = calculate_max_load()
print(f"최대 하중: {max_load:.2f} kg")

ani = FuncAnimation(fig, update, frames=100, interval=100, repeat=False)
plt.show()
