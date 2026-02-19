#include<stdio.h>

int main()
{
    int n, i;
    int rate;
    int max = 0;
    int agent = 0;

    scanf("%d",&n);

    for(i = 1; i <= n; i++)
    {
        scanf("%d",&rate);   

        
        if(rate > max)
        {
            max = rate;
            agent = i;
        }
    }

    printf("Agent %d has highest priority", agent);

    return 0;
}
