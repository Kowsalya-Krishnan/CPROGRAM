#include <stdio.h>

int main() {
    int m1, m2, m3, m4, m5;
    float percentage;
    printf("Enter marks of subjects: ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);
    if (m1<0||m1>100||m2<0||m2>100||m3<0||m3>100||m4<0||m4>100||m5<0||m5>100) {
        printf("Invalid marks! Must be between 0 and 100.");
        return 0;
    }
    if (m1>35 && m2>35 && m3>35 && m4>35 && m5>35) {
        percentage = (m1+m2+m3+m4+m5)/500 * 100;

        printf("Percentage = %.2f\n", percentage);

        if (percentage >= 90)
            printf("Grade = A");
        else if (percentage >= 75)
            printf("Grade = B");
        else if (percentage >= 60)
            printf("Grade = C");
        else if (percentage >= 50)
            printf("Grade = D");
        else
            printf("Grade = E");
    }
    else {
        printf("Result: Fail");
    }

    
}