#include<stdio.h>
int main(){
    int a;
    printf("Enter the eye power level:");
    scanf("%d",&a);
    if(a==0){
        printf("normal");
    }
    else if((a<=-1&&a>=-4)||(a>=1&&a<=4)){
        printf("minimum");
    }
    else if((a<=-5&&a>=-8)||(a>=5&&a<=8)){
        printf("moderate");
    }
    else if((a<=-9&&a>=-12)||(a>=9&&a<=12)){
        printf("high");
    }
    else if((a<=-13&&a>=-16)||(a>=13&&a<=16)){
        printf("chronic");
    }
    else{
        printf("Invalid");
    }
}