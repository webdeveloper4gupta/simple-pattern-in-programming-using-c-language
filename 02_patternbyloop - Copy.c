#include<stdio.h>
int main()
 /*               
                   1                1
*                  22               12
**                 333              123
***                4444             1234
****               55555            12345
******  
*/
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            //printf("*");
           // printf("%d",i);
           printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}


