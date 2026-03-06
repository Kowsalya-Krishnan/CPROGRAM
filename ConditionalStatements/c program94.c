#include <stdio.h>

int main() {
    int A;

    printf("Enter a number (1 - 1000): ");

    if (scanf("%d", &A) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 0;
    }

    if (A < 1 || A > 1000) {
        printf("Number out of range.\n");
        return 0;
    }

    if (A % 2 == 0 && A % 7 == 0) {
        printf("Alice takes it home.\n");
    }
    else if (A % 2 != 0 && A % 9 == 0) {
        printf("Bob takes it home.\n");
    }
    else {
        printf("Charlie takes it home.\n");
    }

    return 0;
}