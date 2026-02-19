#include<stdio.h>
int main(){
    int temp;
    scanf("%d",&temp);
    if(temp<0){
        printf("freezing whether");
    }
    else if(temp>=0&&temp<=10){
        printf("very cold whether");
    }
    else if(temp<=20){
        printf("cold whether");
    }
    else if(temp<=30){
        printf("Normal");
        
    }
    else if(temp<=40){
        printf("hot");
    }
    else{
        printf("very hot");
    }
    
    
    
}