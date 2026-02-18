#include<stdio.h>

int main() {
    int age, ticketprice;

    printf("Enter age: ");
    scanf("%d", &age);

    if(age <= 5) {
        ticketprice = 100;
    }
    else if(age <= 13) {
        ticketprice = 150;
    }
    else if(age <= 19) {
        ticketprice = 200;
    }
    else if(age < 60) {
        ticketprice = 250;
    }
    else {
        ticketprice = 120;
    }

    printf("Ticket price: %d", ticketprice);

    
}
