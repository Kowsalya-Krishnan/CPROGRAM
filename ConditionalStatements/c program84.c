#include <stdio.h>

int main() {
    int n, digit;
    int evenSum = 0, oddSum = 0;
    printf("Enter a four-digit integer: ");
    scanf("%d", &n);
    digit = n % 10;
    if (digit % 2 == 0)
        evenSum += digit;
    else
        oddSum += digit;
    n = n / 10;
    digit = n % 10;
    if (digit % 2 == 0)
        evenSum += digit;
    else
        oddSum += digit;
    n = n / 10;
    digit = n % 10;
    if (digit % 2 == 0)
        evenSum += digit;
    else
        oddSum += digit;
    n = n / 10;
    digit = n % 10;
    if (digit % 2 == 0)
        evenSum += digit;
    else
        oddSum += digit;

    printf("Sum of even digits = %d\n", evenSum);
    printf("Sum of odd digits = %d\n", oddSum);

    return 0;
}