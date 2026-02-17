#include<stdio.h>
int main(){
    int months,days;
    printf("Enter a  month number(1-12):");
    scanf("%d",&months);
    switch(months){
        case 1: case 3: case 5: case 7: case 8: case 10:case 12:
        days=31;
        break;
        case 4: case 6: case 9: case 11:
        days=30;
        break;
        case 2:
        days=28;
        break;
        default:
        printf("invalid month:");
        
    }
    printf("Number of days:%d\n",days);
    
    if(months<=3)
        printf("1");
    else if(months<=6)
        printf("2");
    else if(months<=9)
        printf("3");
    else if(months<=12)
       printf("4:");
    else
      printf("invalid");
}