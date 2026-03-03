#include <stdio.h>

int main() {
    int startTime;
    int timePerAssignment = 2;   
    int totalAssignments = 3;
    int deadline = 10;           

    printf("Enter the time Janmansh starts working (in hours, 24-hour format): ");
    scanf("%d", &startTime);

    int totalTimeNeeded = timePerAssignment * totalAssignments;
    int finishTime = startTime + totalTimeNeeded;

    if (finishTime <= deadline) {
        printf("Janmansh will complete all assignments on time.\n");
    } else {
        printf("Janmansh will NOT complete all assignments on time.\n");
    }
}