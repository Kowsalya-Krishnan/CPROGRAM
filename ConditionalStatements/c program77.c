#include <stdio.h>

int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if (age < 0) {
        printf("Invalid age entered\n");
    }
    else if (age <= 12) {
        printf("Category: Child\n");
    }
    else if (age <= 17) {
        printf("Category: Teenager\n");
    }
    else if (age <= 59) {
        printf("Category: Adult\n");
    }
    else {
        printf("Category: Senior\n");
    }
    if (age >= 18) {
        printf("You are eligible to vote");
    } else {
        printf("You are not eligible to vote");
    }


}