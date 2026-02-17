#include <stdio.h>
int main() {
    int p,c,m,e,s;
    float avg;
    scanf("%d %d %d %d %d",&p,&c,&m,&e,&s);
    avg=(p+c+m+e+s)/5;
    printf("Average:%2f\n",avg);
    if(avg>=95) {
        printf("A");
    }
    else if(avg>=85) {
        printf("B");
    }
    else if(avg>=75) {
        printf("C");
    }
    else if(avg>=65) {
        printf("D");
    }
    else if(avg>=45) {
        printf("E");
    }
    else {
        printf("F");
    }
    
}