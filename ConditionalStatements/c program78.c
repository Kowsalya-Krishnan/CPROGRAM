#include <stdio.h>

int main() {
    float value;
    char unit;

    printf("Enter value: ");
    scanf("%f", &value);

    printf("Enter unit (k/m): ");
    scanf(" %c", &unit);

    if (unit == 'k') {
        printf("In metres = %.2f m", value * 1000);
    }
    else if (unit == 'm') {
        printf("In kilometres = %.2f km", value / 1000);
    }
    else {
        printf("Invalid unit");
    }

    
}