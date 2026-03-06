#include <stdio.h>

int main() {
    float weight, cost;

    printf("Enter the weight of the package (kg): ");
    scanf("%f", &weight);

    if (weight <= 0) {
        printf("Invalid weight.\n");
    }
    else if (weight <= 5) {
        cost = 5.0;
        printf("Package Category: Small\n");
        printf("Shipping Cost: $%.2f\n", cost);
    }
    else if (weight <= 10) {
        cost = 10.0;
        printf("Package Category: Medium\n");
        printf("Shipping Cost: $%.2f\n", cost);
    }
    else {
        cost = 15.0;
        printf("Package Category: Large\n");
        printf("Shipping Cost: $%.2f\n", cost);
    }

    return 0;
}