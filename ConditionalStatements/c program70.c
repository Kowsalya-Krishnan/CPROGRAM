#include <stdio.h>

int main() {
    float distance;

    printf("Enter the distance: ");
    scanf("%f", &distance);

    if (distance > 1000) {
        
        float km = distance / 1000;
        printf("Distance in kilometres: %.2f km\n", km);
    } else {
        
        float metres = distance / 100;
        printf("Distance in metres: %.2f m\n", metres);
    }

    
}
