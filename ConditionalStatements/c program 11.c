#include <stdio.h>

int main() {
    int month, days, year;

    printf("Enter the month number: ");
    scanf("%d", &month);

    switch(month) {

        case 1:
            printf("January\n");
            days = 31;
            break;

        case 2:
            printf("February\n");
            printf("Enter year: ");
            scanf("%d", &year);

            if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
                printf("Leap year\n");
                days = 29;
            } else {
                printf("Not a leap year\n");
                days = 28;
            }
            break;

        case 3:
            printf("March\n");
            days = 31;
            break;

        case 4:
            printf("April\n");
            days = 30;
            break;

        case 5:
            printf("May\n");
            days = 31;
            break;

        case 6:
            printf("June\n");
            days = 30;
            break;

        case 7:
            printf("July\n");
            days = 31;
            break;

        case 8:
            printf("August\n");
            days = 31;
            break;

        case 9:
            printf("September\n");
            days = 30;
            break;

        case 10:
            printf("October\n");
            days = 31;
            break;

        case 11:
            printf("November\n");
            days = 30;
            break;

        case 12:
            printf("December\n");
            days = 31;
            break;

        default:
            printf("Invalid month number\n");
            return 0;
    }

    printf("Number of days = %d", days);
    
}
