#include <stdio.h>

int main() {
    int X, Y, sum;
    printf("Enter two integers: ");
    scanf("%d %d", &X, &Y);
    sum = X + Y;
    if (sum % 2 == 0) {
        printf("Sum is Even\n");
    } else {
        printf("Sum is Odd\n");
    }
    if (X > 0 && Y > 0) {
        printf("Both numbers are Positive\n");
    }
    else if (X < 0 && Y < 0) {
        printf("Both numbers are Negative\n");
    }
    else {
        printf("One number is Positive and the other is Negative (or zer0)");
    }

    return 0;
}