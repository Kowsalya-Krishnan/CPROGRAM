#include<stdio.h>
int main(){
    int choice;
    float a,b,result;
    printf("Menu\n");
    printf("1. Addition\n");
    printf("2. Subraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter a choice:");
    scanf("%d",&choice);
    printf("Enter two numbers:");
    scanf("%f %f",&a,&b);
    switch(choice){
        case 1:
              result=a+b;
              printf("result:%.2f",result);
              break;
        case 2:
              result=a-b;
              printf("result:%.2f",result);
              break;
        case 3:
              result=a*b;
              printf("result:%.2f",result);
              break;
        case 4:
              if(b!=0){
                  printf("result:%.2f",a/b);
              }
              else{
                  printf("division by zero is not allow");
                  break;
              
        default:
                printf("invalid");
              }
  }
        
              
}
    
