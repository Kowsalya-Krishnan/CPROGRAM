#include<stdio.h>
int main(){
    float basic,hra,da,gross;
    printf("Total basic salary:");
    scanf("%f",&basic);
    if(basic<=70000){
        hra=basic*0.30;
        da=basic*0.80;
        
    }
    gross=basic+hra+da;
    printf("hra:%.2f\n",hra);
    printf("da:%.2f\n",da);
    printf("gross salary:%.2f\n",gross);
}