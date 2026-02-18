#include <stdio.h>

int main() {
    int total, perday, days, needed;
    printf("Enter total chocolates: ");
    scanf("%d", &total);
    printf("Enter chocolates per day: ");
    scanf("%d", &perday);
    printf("Enter planned days: ");
    scanf("%d", &days);
    needed = perday * days;
    if(total >= needed)
        printf("1");  
    else
        printf("0");   

    return 0;
}
