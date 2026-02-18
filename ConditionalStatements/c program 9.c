#include<stdio.h>
int main(){
    int age;
    printf("Enter age:");
    scanf("%d",&age);
    if(age<0){
        printf("invalid");
    }
    else if(age<=5){
        printf("suggestion:Mashed vegetable &soft fruits");
    }
    else if(age>=6&&age<=12){
        printf("suggestion:Soup or grilled fish");
    }
    else if(age>=13&&age<=18){
        printf("suggestion:Burrgers or pasta");
    }
    else if(age>=19&&age<30){
        printf("suggestion:Chapthi,Idli,Dosa");
        
    }
    else{
        printf("suggestion: Milk,fruits&rice");
    }
      
}