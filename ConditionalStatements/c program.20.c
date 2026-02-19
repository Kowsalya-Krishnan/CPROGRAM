#include<stdio.h>
int main(){
    float IA,SP,Cp;
    float share,Cv,result;
    printf("enter invesement amount:");
    scanf("%f",&IA);
    printf("enter stock price:");
    scanf("%f",&SP);
    printf("enter current price value:");
    scanf("%f",&Cp);
    share=IA/SP;
    Cv=share*Cp;
    result=Cv-IA;
    if(result>0){
        printf("profit=%.2f\n",result);
    }
    else if(result<0){
        printf("loss=%.2f\n",-result);
        
    }
    else{
        printf("No profit no Loss\n");
        
    }
    
}