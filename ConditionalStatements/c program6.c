#include <stdio.h>

int main() {
    int hours;
    char gender;
    int salary = 0;
    printf("Enter hours worked in a week: ");
    scanf("%d", &hours);
    printf("Enter gender (M/F): ");
    scanf(" %c", &gender);
    if (hours <= 8) {
        if (gender == 'M' || gender == 'm') {
            salary = hours * 80;
        } else if (gender == 'F' || gender == 'f') {
            salary = hours * 60;
        }
    } 
    else { 
    
        if (gender == 'M' || gender == 'm') {
            salary = 8 * 80;
        } else if (gender == 'F' || gender == 'f') {
            salary = 8 * 60;
        }
      salary = salary + (hours - 8) * 100;
    }

    printf("Total Salary = Rs.%d\n", salary);

    return 0;
}
