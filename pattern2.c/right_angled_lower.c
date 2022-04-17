#include<stdio.h>
int main()
{
     int i;
    int n1,n2;
    printf("enter the number of rows  in the pattern\n");
    scanf("%d",&n1);
    int j;
    for(i=1;i<=n1;i++){
        for(j=1;j<i;j++){
            printf(" ");
        }
        for(int k=i;k<=n1;k++){
            printf("*");
        }
        printf("\n");
    }

}