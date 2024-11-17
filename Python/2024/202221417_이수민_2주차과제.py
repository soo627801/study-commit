import numpy as np
import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d import Axes3D
from matplotlib.widgets import Slider, TextBox
from matplotlib import rc
rc('font', family='AppleGothic')
plt.rcParams['axes.unicode_minus'] = False

# 회전 변환 행렬 생성 함수
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

def FK(theta1, theta2):
    a1 = 6
    a2 = 5

    rotation1 = rotation_matrix_z(theta1)
    offset = rotation1 @ np.array([0,0,a1])
    rotation2 = rotation_matrix_y(theta2)
    end_effector = rotation1 @ rotation2 @ np.array([0,0,a2]) + offset
    
    return end_effector

def IK(x, y):
    a1 = 6
    a2 = 5

    distance = np.sqrt(x**2 + y**2)

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

def Display3D(theta1, theta2):
    ax.cla() 
    ax.set_xlim([-10, 10])
    ax.set_ylim([-10, 10])
    ax.set_zlim([0, 15])
    ax.set_xlabel('X axis')
    ax.set_ylabel('Y axis')
    ax.set_zlabel('Z axis')


    rotation1 = rotation_matrix_z(theta1)
    plot_cylinder(ax, length=6, radius=1, transform_matrix=rotation1, offset=[0, 0, 0])

    offset = rotation1 @ np.array([0, 0, 6]) 
    initial_rotation2 = rotation_matrix_y(-90)  
    additional_rotation2 = rotation_matrix_y(theta2) 
    plot_cylinder(ax, length=5, radius=0.8, transform_matrix=rotation1 @ initial_rotation2 @ additional_rotation2, offset=offset)

    global end_effector
    end_effector = FK(theta1, theta2)
    #text_pos.set_text(f"말단좌표: x={end_effector[0]:.2f}, y={end_effector[1]:.2f}, z={end_effector[2]:.2f}")
    plt.draw()

def update(val):
    theta1 = slider1.val  # 첫 번째 원통의 회전 각도
    theta2 = slider2.val  # 두 번째 원통의 회전 각도
    Display3D(theta1, theta2)

def submit_x(text):
    print(f'X 입력 값: {text}')

def submit_y(text):
    print(f'Y 입력 값: {text}')

def submit_z(text):
    print(f'Z 입력 값: {text}')

fig = plt.figure()
ax = fig.add_subplot(111, projection='3d')
plt.subplots_adjust(left=0.05, right=0.75)  

Display3D(0, 0)

axcolor = 'lightgoldenrodyellow'
slider1_ax = plt.axes([0.7, 0.60, 0.15, 0.03], facecolor=axcolor)  
slider2_ax = plt.axes([0.7, 0.55, 0.15, 0.03], facecolor=axcolor) 

slider1 = Slider(slider1_ax, 'J1', 0, 270, valinit=0)
slider2 = Slider(slider2_ax, 'J2', 0, 120, valinit=0)

x_box_ax = plt.axes([0.9, 0.6, 0.05, 0.03])  
y_box_ax = plt.axes([0.9, 0.55, 0.05, 0.03])  
z_box_ax = plt.axes([0.9, 0.5, 0.05, 0.03])  

x_text_box = TextBox(x_box_ax, 'X:', initial="0")
y_text_box = TextBox(y_box_ax, 'Y:', initial="0")
z_text_box = TextBox(z_box_ax, 'Z:', initial="0")

x_text_box.on_submit(submit_x)
y_text_box.on_submit(submit_y)
z_text_box.on_submit(submit_z)

fig.text(0.7, 0.70, '정기구학', fontsize=9, color='black')
fig.text(0.7, 0.45, '말단 좌표', fontsize=9, color='black')

fig.text(0.9, 0.70, '역기구학', fontsize=9, color='black')
fig.text(0.9, 0.65, '목표 좌표', fontsize=9, color='black')
fig.text(0.9, 0.45, '관절 각도', fontsize=9, color='black')

#text_pos = fig.text(0.7, 0.4, "말단좌표: x=0, y=0, z=0", fontsize=9, color='black')

slider1.on_changed(update)
slider2.on_changed(update)

plt.show()
