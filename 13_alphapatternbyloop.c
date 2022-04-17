#include<stdio.h>
int main()
/*
    A
   A  B
 A   B  C
 
*/
{
    char ch='A';
    for(int i=1;i<=5;i++)
   
    {
        char ch='A';
        for(int j=5 ;j>i;j--){
        printf(" ");
        }
    
    for(int k=1;k<=i;k++)
    {
        printf("%c ",ch);
        ch=ch+1;

    }
    printf("\n");
    }
    return 0;
}