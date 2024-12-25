import numpy as np
import matplotlib.pyplot as plt

# Define the differential equation function f(x, y)
def f(x, y):
    return 4 * x**3 * y**2








    

# Euler's method for solving ODE
def euler_method(f, y0, x0, h, x_end):
    # Initialize the list for x and y values
    x_vals = np.arange(x0, x_end + h, h)
    y_vals = [y0]

    # Perform Euler's method
    for i in range(1, len(x_vals)):
        y_new = y_vals[-1] + h * f(x_vals[i-1], y_vals[-1])
        y_vals.append(y_new)
    
    return x_vals, np.array(y_vals)

# Initial conditions
y0 = 0.5   # y(0) = 0.5
x0 = 0     # Start at x = 0
h = 0.1    # Step size
x_end = 1 # End point (you can change this based on your need)

# Solve the differential equation
x_vals, y_vals = euler_method(f, y0, x0, h, x_end)

# Plot the solution
plt.plot(x_vals, y_vals, label='Euler Method', color='blue', marker='o')
plt.xlabel('x')
plt.ylabel('y')
plt.title('Solution to dy/dx = 4x^3 y^2 with y(0) = 0.5')
plt.legend()
plt.grid(True)
plt.show()
