#include<stdio.h>
int main()
{
    char ch='A';
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            printf("%c",ch);
        }
        ch=ch+1;
        printf("\n");
    }
    return 0;

}