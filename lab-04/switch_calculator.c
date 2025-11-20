#include <stdio.h>

int main() {
    int choice;
    float number1, number2, result;

    
    printf("Simple Calculator Using Switch\n");
    printf("1. addition\n");
    printf("2. subtraction\n");
    printf("3. multiplication\n");
    printf("4. division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

  
    printf("Enter first number: ");
    scanf("%f", &number1);
    printf("Enter second number: ");
    scanf("%f", &number2);

    switch(choice) {
        case 1:
            result = number1 + number2;
            printf("Result = %.2f\n", result);
            break;
        case 2:
            result = number1 - number2;
            printf("Result = %.2f\n", result);
            break;
        case 3:
            result = number1 * number2;
            printf("Result = %.2f\n", result);
            break;
        case 4:
            if(number2 != 0)
                result = number1 / number2;
            else {
                printf("Error! Division by zero\n");
                return 0;
            }
            printf("Result = %.2f\n", result);
            break;
        default:
            printf("Invalid choice! Please enter 1-4.\n");
    }

    return 0;
}
