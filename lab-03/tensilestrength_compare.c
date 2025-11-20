#include <stdio.h>

int main() {
    float t1, t2;
    printf("Enter tensile strength of material 1 (MPa): ");
    scanf("%f", &t1);
    printf("Enter tensile strength of material 2 (MPa): ");
    scanf("%f", &t2);

    if (t1 > t2)
        printf("Material 1 has higher tensile strength: %.2f MPa\n", t1);
    else if (t2 > t1)
        printf("Material 2 has higher tensile strength: %.2f MPa\n", t2);
    else
        printf("Both materials have equal tensile strength: %.2f MPa\n", t1);

    return 0;
}
