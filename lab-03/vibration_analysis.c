#include <stdio.h>

int main() {
    float amplitude, frequency;
    printf("Enter vibration amplitude (mm): ");
    scanf("%f", &amplitude);
    printf("Enter vibration frequency (Hz): ");
    scanf("%f", &frequency);

    if (amplitude > 0.5 && frequency >= 20 && frequency <= 50)
        printf("High Risk\n");
    else if (amplitude > 0.5 || frequency > 60)
        printf("Medium Risk\n");
    else
        printf("Low Risk\n");

    return 0;
}
