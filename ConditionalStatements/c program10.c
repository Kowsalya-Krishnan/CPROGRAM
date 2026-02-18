#include<stdio.h>
int main(){
    int day;
    printf("Enter a num(1-7):");
    scanf("%d",&day);
    if(day==1){
        printf("Monday\nWeekday");
    }
    else if(day==2){
        printf("Tuesday\nWeekday");
    }
    else if(day==3){
        printf("Wednesday\nWeekday");
    
    }
    else if(day==4){
        printf("Thursday\nWeekday");
    }
    else if(day==5){
        printf("Friday\nWeekday");
        
    }
    else if(day==6){
        printf("Saturday\nHoliday");
        
    }
    else if(day==7){
        printf("Sunday\nHoliday");
    }
    else{
        printf("invalid");
    }
}