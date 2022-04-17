#include<stdio.h>
int main()
{
    int n;
    int i,j,k;
    printf("enter the number of eleemnts you required\n");
    scanf("%d",&n);
    for(i=1;i<=5;i++){
        for(j=1;j<=5-i;j++){
            printf(" ");
        }
        for(k=1;k<=(2*i-1);k++){
            
                printf("%d",k+1);
            
        }
        printf("\n");
    }
}