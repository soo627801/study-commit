import matplotlib.pyplot as plt
import numpy as np
from numpy import cos, sin
import matplotlib.animation as animation
from mpl_toolkits.mplot3d import Axes3D

g = 9.8 
l1 = 2
l2 = 2  
l = l1 + l2  
m1 = 1.0
m2 = 1.0
t_stop = 10 
history_len = 500 
dt = 0.01

def derivs(t, state):
    dydx = np.zeros_like(state)

    dydx[0] = state[1]

    delta = state[2] - state[0]
    den1 = (m1+m2) * l1 - m2 * l1 * cos(delta) * cos(delta)
    dydx[1] = ((m2 * l1 * state[1] * state[1] * sin(delta) * cos(delta)
                + m2 * g * sin(state[2]) * cos(delta)
                + m2 * l2 * state[3] * state[3] * sin(delta)
                - (m1+m2) * g * sin(state[0]))
               / den1)

    dydx[2] = state[3]

    den2 = (l2/l1) * den1
    dydx[3] = ((- m2 * l2 * state[3] * state[3] * sin(delta) * cos(delta)
                + (m1+m2) * g * sin(state[0]) * cos(delta)
                - (m1+m2) * l1 * state[1] * state[1] * sin(delta)
                - (m1+m2) * g * sin(state[2]))
               / den2)

    return dydx

t = np.arange(0, t_stop, dt)

q1 = 120.0
w1 = 0.0
q2 = -10.0
w2 = 0.0

state = np.radians([q1, w1, q2, w2])

y = np.empty((len(t), 4))
y[0] = state
for i in range(1, len(t)):
    y[i] = y[i - 1] + derivs(t[i - 1], y[i - 1]) * dt

x1 = l1 * sin(y[:, 0])
y1 = -l1 * cos(y[:, 0])

x2 = l2 * sin(y[:, 2]) + x1
y2 = -l2 * cos(y[:, 2]) + y1

z1 = np.zeros_like(x1) 
z2 = np.zeros_like(x2)  

fig = plt.figure(figsize=(8, 6))
ax = fig.add_subplot(111, projection='3d', autoscale_on=False, xlim=(-3.5, 3.5), ylim=(-3.5, 3.5), zlim=(-3, 3))
ax.set_box_aspect([1, 1, 0.6])
ax.grid()

ax.set_xlim([-3.5, 3.5])  
ax.set_ylim([-3.5, 3.5])  
ax.set_zlim([-3.5, 3.5])

line, = ax.plot([], [], [], 'o-', lw=2, markersize=6)
trace, = ax.plot([], [], [], 'r-', lw=1, alpha=0.5)
torque_text = ax.text2D(0.05, 0.85, '', transform=ax.transAxes)

def animate(i):
    thisx = [0, x1[i], x2[i]]
    thisy = [0, y1[i], y2[i]]
    thisz = [0, z1[i], z2[i]]  

    line.set_data(thisx, thisy)
    line.set_3d_properties(thisz)

    trace.set_data(x2[:i], y2[:i])
    trace.set_3d_properties(z2[:i])

    if i > 0:
        alpha1 = (y[i, 1] - y[i - 1, 1]) / dt  
        I1 = (1 / 3) * m1 * l1**2 
        tau1 = I1 * alpha1  
        torque_text.set_text(f'Torque = {tau1:.2f} Nm')

    return line, trace, torque_text

ani = animation.FuncAnimation(fig, animate, len(y), interval=dt*1000, blit=True, repeat=True)
plt.show()
