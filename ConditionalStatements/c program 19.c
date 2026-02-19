#include<stdio.h>
int main(){
    int angle;
    printf("Enter a angle:");
    scanf("%d",&angle);
    if(angle==0||angle==360){
        printf("East");
    }
    else if(angle==90){
        printf("north");
    }
    else if(angle==180){
        printf("West");
    }
    else if(angle==270){
        printf("South");
    }
    else{
        printf("invalid");
    }
}