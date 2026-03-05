#include <stdio.h>

int main() {
    int X, discount = 0, finalAmount;

    printf("Enter total amount spent: ");
    scanf("%d", &X);

    // Input validation
    if (X < 1 || X > 10000) {
        printf("Invalid input! Amount must be between 1 and 10000.\n");
        return 0;
    }

    // Discount conditions
    if (X <= 100) {
        discount = 0;
    }
    else if (X <= 1000) {
        discount = 25;
    }
    else if (X <= 5000) {
        discount = 100;
    }
    else {
        discount = 500;
    }

    finalAmount = X - discount;

    printf("Discount: %d\n", discount);
    printf("Final Amount to Pay: %d\n", finalAmount);

    return 0;
}