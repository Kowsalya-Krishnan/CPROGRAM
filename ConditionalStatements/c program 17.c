#include <stdio.h>
int main() {
    int symptoms;
    printf("Enter number of symptoms: ");
    scanf("%d", &symptoms);
    if(symptoms < 0) {
        printf("Invalid input");
    }
    else if(symptoms >= 5) {
        printf("Critical condition\nHigh priority");
    }
    else if(symptoms >= 3) {
        printf("Moderate condition\nMedium priority");
    }
    else {
        printf("Stable condition\nLow priority");
    }

    
}
