#include<stdio.h>
int main()
{
    char ch;
    for(int i=1;i<=5;i++)
    {
        char ch='A';
        for(int j= 5;j>i;j--){
            printf(" ");
        }
        for(int k=i ;k>=1;k--)
        {
            printf("%c",ch);
            ++ch;
        }
        printf("\n");
    }
    return 0;
}