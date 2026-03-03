#include <stdio.h>
#include <math.h>

int main() {
    int basic;
    char grade;
    
    scanf("%d %c", &basic, &grade);
    
    double hra = 0.20 * basic;
    double da  = 0.50 * basic;
    double pf  = 0.11 * basic;
    int allowance;
    
    if (grade == 'A') {
        allowance = 1700;
    } 
    else if (grade == 'B') {
        allowance = 1500;
    } 
    else {
        allowance = 1300;
    }
    
    double totalSalary = basic + hra + da + allowance - pf;
    
    printf("%d", (int)round(totalSalary));
    
    return 0;
}