
#include <stdio.h>

int main() {
    float mass, velocity, kinetic_energy;
    printf("Enter mass (kg): ");
    scanf("%f", &mass);
    printf("Enter velocity (m/s): ");
    scanf("%f", &velocity);

    kinetic_energy = 0.5 * mass * velocity * velocity;
    printf("Kinetic Energy = %.2f J\n", kinetic_energy);

    return 0;
}
