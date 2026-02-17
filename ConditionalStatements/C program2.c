#include<stdio.h>
int main(){
    int percentage;
    scanf("%d",&percentage);
    if(percentage>=95){
        printf("A");
    }
    else if(percentage>=85){
        printf("B");
        
    }
    else if(percentage>=75){
        printf("c");
    }
    else if(percentage>=65){
        printf("D");
        
    }
    else if(percentage>=45){
        printf("E");
    }
    else{
        printf("F");
    }
}