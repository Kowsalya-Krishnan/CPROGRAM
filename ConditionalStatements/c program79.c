#include <stdio.h>

int main() {
    int temp;

    printf("Enter temperature: ");
    scanf("%d", &temp);

    if (temp < 0) {
        printf("Freezing Weather");
    }
    else if (temp >= 0 && temp <= 15) {
        printf("Cold Weather");
    }
    else if (temp >= 16 && temp <= 30) {
        printf("Moderate Weather");
    }
    else {
        printf("Hot Weather");
    }

    
}