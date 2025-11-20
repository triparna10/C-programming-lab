#include <stdio.h>

int main() {
    float stress, yield_strength, fos;
    printf("Enter applied stress (MPa): ");
    scanf("%f", &stress);
    printf("Enter material yield strength (MPa): ");
    scanf("%f", &yield_strength);

    fos = yield_strength / stress;
    printf("Factor of Safety (FoS) = %.2f\n", fos);

    if (fos >= 2.0)
        printf("Safe design.\n");
    else if (fos >= 1.5)
        printf("Acceptable with monitoring.\n");
    else
        printf("Danger - redesign needed!\n");

    return 0;
}
