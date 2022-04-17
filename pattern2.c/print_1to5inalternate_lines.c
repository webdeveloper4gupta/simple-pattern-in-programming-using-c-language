#include<stdio.h>
int main()
{
    int i,j;
    int n1=5;
    for(i=1;i<=n1;i++){
        for(j=1;j<=n1;j++){
            if(i%2==0){
                printf("1 2 3 4 5");
                break;
            }
            else{
                printf(" ");

            }
        }
        printf("\n");
    }
    return 0;
}