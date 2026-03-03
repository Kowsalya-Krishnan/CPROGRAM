#include <stdio.h>

int main() {
    int a, b, c;
    int largest, smallest;

    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    largest = a;
    smallest = a;

    if (b > largest)
        largest = b;
    if (b < smallest)
        smallest = b;

    if (c > largest)
        largest = c;
    if (c < smallest)
        smallest = c;

    printf("Largest number is: %d\n", largest);
    printf("Smallest number is: %d\n", smallest);

    return 0;
}