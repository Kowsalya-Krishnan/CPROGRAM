#include <stdio.h>
int main() {
    float temp;
    printf("Enter temp: ");
    scanf("%f",&temp);
    if(temp<=37) {
        printf("not fever");
    }
    else {
        printf("has fever");
    }
}