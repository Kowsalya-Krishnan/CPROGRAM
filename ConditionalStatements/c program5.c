#include <stdio.h>

int main() {
    int steps, time;
    printf("Enter number of steps taken in a day: ");
    scanf("%d", &steps);
    printf("Enter time taken (in minutes): ");
    scanf("%d", &time);
    if (steps >= 10000 && time >= 60) {
        printf("Fitness Level: Excellent\n");
    }
    else if (steps >= 7000 && time >= 40) {
        printf("Fitness Level: Good\n");
    }
    else if (steps >= 4000 && time >= 20) {
        printf("Fitness Level: Average\n");
    }
    else {
        printf("Fitness Level: Poor\n");
    }


}
