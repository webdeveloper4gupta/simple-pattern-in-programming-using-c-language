#include<stdio.h>
int main()
{
    int i,j;
    int k;
    for(i=0;i<5;i++){
        for(j=0;j<i;j++){
            printf(" ");
        }
        for(k=i;k<5;k++){
            printf("*");
        }
        printf("\n");
    }
}