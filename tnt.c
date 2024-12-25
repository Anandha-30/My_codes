#include <stdio.h>
#include <math.h>

// Define the differential equation function f(x, y)
double f(double x, double y) {
    return 4 * pow(x, 3) * pow(y, 2); // f(x, y) = 4 * x^3 * y^2
}

// Runge-Kutta 4th order method
void runge_kutta(double (*f)(double, double), double y0, double x0, double h, int n) {
    double x = x0;
    double y = y0;
    double k1, k2, k3, k4;
    
    printf("x\t\ty\n");
    printf("%.4f\t%.6f\n", x, y); // Print initial condition
    
    for (int i = 1; i < n; i++) {
        k1 = h * f(x, y);
        k2 = h * f(x + 0.5 * h, y + 0.5 * k1);
        k3 = h * f(x + 0.5 * h, y + 0.5 * k2);
        k4 = h * f(x + h, y + k3);
        
        y = y + (1.0 / 6.0) * (k1 + 2 * k2 + 2 * k3 + k4); // Update y
        x = x + h; // Increment x by step size
        
        printf("%.4f\t%.6f\n", x, y); // Print values of x and y
    }
}

int main() {
    int n;
    double h;
    
    // User input for step size h and number of steps n
    printf("Enter the step size (h): ");
    scanf("%lf", &h);
    
    printf("Enter the number of steps (n): ");
    scanf("%d", &n);
    
    // Initial conditions
    double x0 = 0.0;
    double y0 = 0.5;

    // Solve the ODE using Runge-Kutta method
    runge_kutta(f, y0, x0, h, n);

    return 0;
}
