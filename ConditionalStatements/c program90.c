#include <stdio.h>

int main() {
    float temp, result;
    int choice;

    printf("Temperature Conversion Program\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    printf("Enter temperature value: ");
    scanf("%f", &temp);

    if(choice == 1) {
        result = (temp * 9.0/5.0) + 32;
        printf("Fahrenheit = %.2f°F\n", result);
    }
    else if(choice == 2) {
        result = (temp - 32) * 5.0/9.0;
        printf("Celsius = %.2f°C\n", result);
    }
    else {
        printf("Invalid choice!\n");
    }

    return 0;
}