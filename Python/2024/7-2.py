import numpy as np
import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d.art3d import Poly3DCollection
import matplotlib.animation as animation

gear1_radius = 1.0
gear2_radius = 0.25  
gear1_thickness = 2.0  
gear2_thickness = 2.0 

dt = 0.01

angular_velocity_ratio = gear1_radius / gear2_radius

fig = plt.figure()
ax = fig.add_subplot(111, projection='3d')
ax.set_xlim(-3, 3)
ax.set_ylim(-3, 3)
ax.set_zlim(-3, 3)

def create_gear(radius, thickness, num_teeth):
    z = np.linspace(0, thickness, 2)
    theta = np.linspace(0, 2 * np.pi, num_teeth)
    theta_grid, z_grid = np.meshgrid(theta, z)
    x_grid = radius * np.cos(theta_grid)
    y_grid = radius * np.sin(theta_grid)
    return x_grid, y_grid, z_grid

def create_axis(radius, length):
    z = np.linspace(-length / 2, length / 2, 2)
    theta = np.linspace(0, 2 * np.pi, 100)
    theta_grid, z_grid = np.meshgrid(theta, z)
    x_grid = radius * np.cos(theta_grid)
    y_grid = radius * np.sin(theta_grid)
    return x_grid, y_grid, z_grid

gear1_x, gear1_y, gear1_z = create_gear(gear1_radius, gear1_thickness, 100)
gear2_x, gear2_y, gear2_z = create_gear(gear2_radius, gear2_thickness, 100)

axis1_x, axis1_y, axis1_z = create_axis(0.05, gear1_thickness * 2)
axis2_x, axis2_y, axis2_z = create_axis(0.05, gear2_thickness * 2)

gear1_surf = ax.plot_surface(gear1_x, gear1_y, gear1_z - (gear1_thickness / 2), color='b', edgecolor='k')
gear2_surf = ax.plot_surface(gear2_x, gear2_y + (gear1_radius + gear2_radius), gear2_z - (gear2_thickness / 2), color='r', edgecolor='k')
axis1_surf = ax.plot_surface(axis1_x, axis1_y, axis1_z - (gear1_thickness / 2), color='k', edgecolor='k')
axis2_surf = ax.plot_surface(axis2_x, axis2_y + (gear1_radius + gear2_radius), axis2_z + (gear2_thickness / 2), color='k', edgecolor='k')
torque_text = ax.text2D(0.05, 0.95, '', transform=ax.transAxes)

def update(frame):
    angle1 = frame * dt * 4 * np.pi 
    angle2 = -angle1 * angular_velocity_ratio  

    torque1 = 1.0 
    torque2 = torque1 * angular_velocity_ratio 

    ax.collections.clear()
    
    ax.plot_surface(gear1_x * np.cos(angle1) - gear1_y * np.sin(angle1), 
                    gear1_x * np.sin(angle1) + gear1_y * np.cos(angle1), 
                    gear1_z - (gear1_thickness / 2), color='b', edgecolor='k')
    ax.plot_surface((gear2_x * np.cos(angle2) - gear2_y * np.sin(angle2)), 
                    (gear2_x * np.sin(angle2) + gear2_y * np.cos(angle2)) + (gear1_radius + gear2_radius), 
                    gear2_z - (gear2_thickness / 2), color='r', edgecolor='k')
    ax.plot_surface(axis1_x * np.cos(angle1) - axis1_y * np.sin(angle1), 
                    axis1_x * np.sin(angle1) + axis1_y * np.cos(angle1), 
                    axis1_z - (gear1_thickness / 2), color='k', edgecolor='k')
    ax.plot_surface((axis2_x * np.cos(angle2) - axis2_y * np.sin(angle2)), 
                    (axis2_x * np.sin(angle2) + axis2_y * np.cos(angle2)) + (gear1_radius + gear2_radius), 
                    axis2_z - (gear2_thickness / 2), color='k', edgecolor='k')
    torque_text.set_text(f'Torque 1: {torque1:.2f} N·m\nTorque 2: {torque2:.2f} N·m')
    return ax.collections + [torque_text]

ani = animation.FuncAnimation(fig, update, frames=np.arange(0, 1000), interval=dt*1000/60)

plt.show()
