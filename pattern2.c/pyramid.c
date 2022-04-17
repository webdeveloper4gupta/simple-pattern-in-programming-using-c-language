#include<stdio.h>
int main()
{
    int i,j,k;
    int n1,n2;
    int z=1;
    printf("enter the number of row  in the pattern \n");
    scanf("%d",&n1);
    for(i=0;i<n1;i++){
        for(j=0;j<n1-i;j++){
            printf(" ");
        }
        for(k=0;k<z;k++){
            printf("*");
            
        }
        z=z+2;
        printf("\n");
    }
}