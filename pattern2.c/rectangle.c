#include<stdio.h>
int main()
{
    int n1,n2;
    printf("enter the numbe of rows and columns in the pattern\n");
    scanf("%d%d",&n1,&n2);
    int i,j,k;
    for(i=1;i<=n1;i++){
        for(j=1;j<=n2;j++){
            if(j==1 ||i==n1||j==n2||i==1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}