#include<stdio.h>
int main()
{
     int i;
    int n1,n2;
    printf("enter the number of rows and column in the pattern\n");
    scanf("%d%d",&n1,&n2);
    int j;
    for(i=1;i<=n1;i++){
        for(j=i;j<=n2;j++){
            printf("*");
        }
        printf("\n");
    }
}