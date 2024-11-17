import numpy as np
import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d.art3d import Poly3DCollection
from matplotlib import rc
from matplotlib.animation import FuncAnimation

rc('font', family='AppleGothic')
plt.rcParams['axes.unicode_minus'] = False

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

def forward_kinematics(theta1, theta2, theta3):
    base = np.array([0, 0, 0])
    joint1 = base + rotation_matrix_z(theta1) @ np.array([0, 0, 4.5])
    joint2 = joint1 + rotation_matrix_z(theta1) @ rotation_matrix_y(70) @ rotation_matrix_y(theta2) @ np.array([0, 0, 3])
    joint3 = joint2 + rotation_matrix_z(theta1) @ rotation_matrix_y(80) @ rotation_matrix_y(theta3) @ np.array([0, 0, 3])
    return base, joint1, joint2, joint3  

def plot_line(ax, start, end, color='g', linewidth=2):
    ax.plot([start[0], end[0]], [start[1], end[1]], [start[2], end[2]], color=color, linewidth=linewidth)

def plot_gripper(ax, end_effector):
    gripper_length = 0.5
    gripper_color = 'blue'
    ax.plot([end_effector[0], end_effector[0] + gripper_length],
            [end_effector[1], end_effector[1]],
            [end_effector[2], end_effector[2]],
            color=gripper_color, linewidth=4)

def inverse_kinematics(target):
    x, y, z = target
    l1 = 5 
    l2 = 4  
    l3 = 3  

    theta1 = np.degrees(np.arctan2(y, x))
    r = np.sqrt(x**2 + y**2)
    z_eff = z - l1

    r_eff = np.sqrt(r**2 + z_eff**2)

    if r_eff > (l2 + l3):
        r_eff = l2 + l3  
    elif r_eff < abs(l2 - l3):
        r_eff = abs(l2 - l3)  

    cos_theta2 = (l2**2 + r_eff**2 - l3**2) / (2 * l2 * r_eff)
    theta2 = np.degrees(np.arccos(np.clip(cos_theta2, -1.0, 1.0)))

    theta3 = np.degrees(np.arccos((l2**2 + l3**2 - r_eff**2) / (2 * l2 * l3)))

    return theta1, theta2, theta3

def lspb_trajectory(t, t0, tf, q0, qf, v_max):
    tb = (qf - q0) / v_max
    if t <= t0:
        return q0, 0
    elif t <= t0 + tb:
        pos = q0 + 0.5 * v_max * (t - t0) ** 2 / tb
        vel = v_max * (t - t0) / tb
    elif t <= tf - tb:
        pos = q0 + 0.5 * v_max * tb + v_max * (t - t0 - tb)
        vel = v_max
    elif t <= tf:
        pos = qf - 0.5 * v_max * (tf - t) ** 2 / tb
        vel = v_max * (tf - t) / tb
    else:
        pos = qf
        vel = 0
    return pos, vel

target_positions = [np.array([2, 5, 4]), np.array([3.1111, 5.6667, 5]), np.array([4.5, 6.5, 6])]
tf = 30 
dt = 0.1  
v_max = 1.0 

initial_angles = inverse_kinematics(target_positions[0])
current_angles = list(initial_angles)

fig = plt.figure()
ax = fig.add_subplot(111, projection='3d')

def update(i):
    global current_angles
    t = i * dt
    ax.cla()
    ax.set_xlim([-10, 10])
    ax.set_ylim([-10, 10])
    ax.set_zlim([0, 10])
    ax.set_xlabel('X 축')
    ax.set_ylabel('Y 축')
    ax.set_zlabel('Z 축')

    for j in range(len(target_positions)):
        t_start = j * tf / len(target_positions)
        t_end = (j + 1) * tf / len(target_positions)

        if t_start <= t <= t_end:
            target = target_positions[j]
            desired_angles = inverse_kinematics(target)

            for k in range(3):  
                current_angles[k] = lspb_trajectory(t, t_start, t_end, current_angles[k], desired_angles[k], v_max)[0]
            break

    base, joint1, joint2, joint3 = forward_kinematics(*current_angles)

    plot_line(ax, base, joint1)
    plot_line(ax, joint1, joint2)
    plot_line(ax, joint2, joint3)

    plot_gripper(ax, joint3)

    for pos in target_positions:
        ax.scatter(*pos, color='red', s=10)

ani = FuncAnimation(fig, update, frames=int(tf/dt), repeat=False)
plt.show()
