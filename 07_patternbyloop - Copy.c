#include<stdio.h>
/*
12345
 1234
  123
   12
    1
  */
int main()
{
    for(int i=5;i>=1;i--)
    {
        for(int j= 5;j>i;j--)
    {
        printf(" ");
    }
    for(int k=1 ;k<=i ;k++){
        printf("%d",k);
    }
    printf("\n");
    }
    return 0;
}