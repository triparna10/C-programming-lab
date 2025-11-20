
#include <stdio.h>

int main() {
    float temp;
    printf("Enter current temperature (°C): ");
    scanf("%f", &temp);

    if (temp > 60 && temp <= 82)
        printf("Temperature is safe.\n");
    else
        printf("Temperature warning!\n");

    return 0;
}
