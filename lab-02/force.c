#include <stdio.h>

int main() {
    float mass, acceleration, force;
    printf("Enter mass (kg): ");
    scanf("%f", &mass);
    printf("Enter acceleration (m/s^2): ");
    scanf("%f", &acceleration);

    force = mass * acceleration;
    printf("Force = %.2f N\n", force);

    return 0;
}
