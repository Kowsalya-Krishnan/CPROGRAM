#include<stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num % 6== 0 || num % 10 == 6)
    {
        printf("%d is a Buzz Number", num);
    }
    else
    {
        printf("%d is not a Buzz Number", num);
    }

    return 0;
}