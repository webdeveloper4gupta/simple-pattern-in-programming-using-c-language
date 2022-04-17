#include<stdio.h>
int main()
/*
*****   55555     54321  54321     12345
****    4444      4321   5432      1234
***     333       321    543       123
**      22        21     54        12
*       1         1      5         1
*/
{
   // for(int i=5 ;i>=1 ;i--)
   for (int i=1;i<=5;i++){
        //for(int j=i ;j>=1  ;j--)
        for(int j=5;j>=i;j--){
           // printf("*");
            printf("%d",j);
            //printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
