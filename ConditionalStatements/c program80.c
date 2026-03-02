#include <stdio.h>

int main() {
    int size;

    printf("Enter dress size: ");
    scanf("%d", &size);

    if (size >= 28 && size <= 32) {
        printf("Small Size");
    }
    else if (size >= 34 && size <= 38) {
        printf("Medium Size");
    }
    else if (size >= 40 && size <= 44) {
        printf("Large Size");
    }
    else if (size >= 46) {
        printf("Extra Large Size");
    }
    else {
        printf("Invalid Size");
    }
}