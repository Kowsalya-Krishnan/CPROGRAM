#include <stdio.h>

int main() {
    float x1, y1, x2, y2, slope;
    printf("Enter x1 and y1: ");
    scanf("%f %f", &x1, &y1);
    printf("Enter x2 and y2: ");
    scanf("%f %f", &x2, &y2);
    if (x2 - x1 == 0) {
        printf("The line is vertical. Slope is undefined.\n");
    } else {
        
        slope = (y2 - y1) / (x2 - x1);

        printf("Slope = %.2f\n", slope);
        if (slope > 0) {
            printf("The line rises from the first point to the second point.\n");
        }
        else if (slope < 0) {
            printf("The line descends from the first point to the second point.\n");
        }
        else {
            printf("The line is horizontal between the two points.\n");
        }
    }

    return 0;
}