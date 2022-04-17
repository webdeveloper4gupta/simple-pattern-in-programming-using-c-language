#include<stdio.h>
int main()
{
    int n1 ,n2;
    printf("ENTER THE NUMBER OF ROWS AND COLUMN \n");
    scanf("%d%d",&n1,&n2);
    for(int i=1;i<=n1;i++)
    {
        for(int j=1;j<=n2;j++){
        printf("*");
    }
    printf("\n");
    }
    return 0;

}