#include<stdio.h>
int main()
{
    int i,n1,n2;
    printf("enter the number of row and the column\n");
    scanf("%d%d",&n1,&n2);
    int j,k;
    int z=1;
    for(i=1;i<=n1;i++){
        for(j=1;j<=n2-z;j++){
            printf(" ");
        }
        for(k=1;k<=z;k++){
            if(k==1||i==5||k==z){
                printf("*");
            }
            else{
                printf(" ");
            }

        }
        z=z+1;
        printf("\n");
    }
}/*
    *
   **
  * *
 *  *
*****
*/