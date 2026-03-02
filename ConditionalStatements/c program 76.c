#include <stdio.h>

int main() {
    int choice;
    float mass, velocity, height;
    float kineticEnergy, potentialEnergy;
    const float gravity = 9.8;

    
    printf("Choose an option:\n");
    printf("1. Calculate Kinetic Energy\n");
    printf("2. Calculate Potential Energy\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        
        printf("Enter mass (in kilograms): ");
        scanf("%f", &mass);

        printf("Enter velocity (in meters per second): ");
        scanf("%f", &velocity);

        kineticEnergy = 0.5 * mass * velocity * velocity;

        printf("Kinetic Energy = %.2f Joules\n", kineticEnergy);
    }
    else if (choice == 2) {
        
        printf("Enter mass (in kilograms): ");
        scanf("%f", &mass);

        printf("Enter height (in meters): ");
        scanf("%f", &height);

        potentialEnergy = mass * gravity * height;

        printf("Potential Energy = %.2f Joules\n", potentialEnergy);
    }
    else {
        printf("Invalid choice. Please select 1 or 2.\n");
    }

    return 0;
}