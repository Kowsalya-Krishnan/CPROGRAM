#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    if(num>1){
        printf("Positive");
    }
    else if(num<0){
        printf("negative");
        
    } 
    else{
        printf("zero");
    }
}