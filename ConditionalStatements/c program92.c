#include <stdio.h>

int main() {
    char ch1, ch2;
    int sum;

    printf("Enter first character: ");
    scanf(" %c", &ch1);

    printf("Enter second character: ");
    scanf(" %c", &ch2);

    sum = ch1 + ch2;

    printf("ASCII value of %c = %d\n", ch1, ch1);
    printf("ASCII value of %c = %d\n", ch2, ch2);
    printf("Sum of ASCII values = %d\n", sum);

    return 0;
}