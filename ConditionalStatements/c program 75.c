#include<stdio.h>

int main(){
    int n;
    printf("Enter charge number: ");
    scanf("%d",&n);
    if(n < 0 || n > 100){
        printf("Invalid");
        return 0;
    }

    if(n >= 0 && n <= 20){
        printf("Low");
    }
    else if(n >= 21 && n <= 50){
        printf("Medium");
    }
    else if(n >= 51 && n <= 80){
        printf("Almost Full");
    }
    else{   // 81–100
        printf("Full");
    }

    
}