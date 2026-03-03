#include <stdio.h>

int main() {
    int seat;

    printf("Enter seat number: ");
    scanf("%d", &seat);

    if (seat % 2 == 0) {  
        if (seat % 4 == 0) {
            printf("Seat is Even and at the Back of the theatre.\n");
        } else {
            printf("Seat is Even and in the Middle of the theatre.\n");
        }
    } else {  
        if (seat % 3 == 0) {
            printf("Seat is Odd and at the Back of the theatre.\n");
        } else {
            printf("Seat is Odd and at the Front of the theatre.\n");
        }
    }

    return 0;
}