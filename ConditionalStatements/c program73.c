#include <stdio.h>

int main() {
    int a, b;
    printf("Enter first integer: ");
    scanf("%d", &a);
    printf("Enter second integer: ");
    scanf("%d", &b);
    printf("Before swapping:");
    printf("a = %d, b = %d\n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping:");
    printf("a = %d, b = %d\n", a, b);

    
}