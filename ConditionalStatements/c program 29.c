#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
    {
        if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||
           ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
            printf("%c is a vowel", ch);
        else
            printf("%c is a consonant", ch);
    }
    else
    {
        printf("%c is not an alphabet", ch);
    }
}