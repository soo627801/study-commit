import numpy as np
import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d.art3d import Poly3DCollection
from matplotlib import rc

rc('font', family='AppleGothic')
plt.rcParams['axes.unicode_minus'] = False

# 포워드 기구학
def forward_kinematics(theta1, d2):
    l1 = 0.5  # 첫 번째 팔의 길이 (50cm)
    l2 = 0.35  # 두 번째 팔의 길이 (35cm)
    
    joint1 = np.array([0, 0, 0])  # 첫 번째 관절 위치
    joint2 = joint1 + np.array([l1 * np.cos(np.radians(theta1)), l1 * np.sin(np.radians(theta1)), 0])
    end_effector = joint2 + np.array([l2 * np.cos(np.radians(theta1)), l2 * np.sin(np.radians(theta1)), 0])  # 두 번째 관절에서 끝부분까지
    return joint1, joint2, end_effector  

# 큐브 그리기 함수
def plot_cube(ax, position):
    r = 0.05  # 상자 크기 (10cm, 0.1m의 절반으로 설정됨)
    vertices = np.array([[1, 1, 1], [1, 1, -1], [1, -1, 1], [1, -1, -1],
                         [-1, 1, 1], [-1, 1, -1], [-1, -1, 1], [-1, -1, -1]]) * r + position
    
    faces = [[vertices[j] for j in [0, 1, 2, 4]],
             [vertices[j] for j in [7, 6, 5, 3]],
             [vertices[j] for j in [0, 2, 3, 1]],
             [vertices[j] for j in [4, 5, 6, 2]],
             [vertices[j] for j in [0, 4, 5, 1]],
             [vertices[j] for j in [7, 3, 2, 6]]]
    
    ax.add_collection3d(Poly3DCollection(faces, facecolors='cyan', linewidths=1, edgecolors='r', alpha=.25))

# 그리퍼 시각화
def plot_gripper(ax, end_effector):
    gripper_length = 0.05  # 그리퍼 길이 (5cm)
    ax.plot([end_effector[0], end_effector[0]],
            [end_effector[1], end_effector[1]],
            [end_effector[2], end_effector[2] + gripper_length], color='blue', linewidth=4)

def plot_robot_arm(ax, theta1, d2):
    joint1, joint2, end_effector = forward_kinematics(theta1, d2)

    # 관절과 팔 그리기
    ax.plot([joint1[0], joint2[0]], [joint1[1], joint2[1]], [joint1[2], joint2[2]], color='green', linewidth=2)
    ax.plot([joint2[0], end_effector[0]], [joint2[1], end_effector[1]], [joint2[2], end_effector[2]], color='green', linewidth=2)

    # 그리퍼 그리기
    plot_gripper(ax, end_effector)

# 3D 표시 함수
def display_robot_arm(theta1, d2, box_pos):
    fig = plt.figure()
    ax = fig.add_subplot(111, projection='3d')
    
    # 축 설정
    ax.set_xlim([-1, 1])
    ax.set_ylim([-1, 1])
    ax.set_zlim([0, 1])
    ax.set_xlabel('X 축')
    ax.set_ylabel('Y 축')
    ax.set_zlabel('Z 축')
    
    # 로봇 팔 그리기
    plot_robot_arm(ax, theta1, d2)

    # 상자 그리기
    plot_cube(ax, box_pos)

    plt.title("3D 로봇 팔 시뮬레이션")
    plt.show()

# 각도 및 거리 예시
theta1 = 0  # 첫 번째 관절의 초기 각도
d2 = 0      # 두 번째 관절의 초기 거리 (0으로 시작)

# 상자 위치
box_pos = np.array([0.5, 0.5, 0])  # 상자의 위치

# 시뮬레이션 실행
for theta in range(0, 360, 10):  # 첫 번째 관절 회전
    d2 = 0.35 if d2 == 0 else 0  # 두 번째 관절 움직임 (들어갔다 나왔다)
    display_robot_arm(theta, d2, box_pos)
