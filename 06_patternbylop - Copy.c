#include<stdio.h>
/*54321
   4321
    321
     21
      1  */
     int main()
     {
         for(int i=5;i>=1;i--)
         {
             for(int j= 5;j>i ;j--)
             {
                 printf(" ");
             }
             for(int k=i ;k>=1 ;k--){
                 printf("%d",k);
             }
             printf("\n");
         }
         return 0;
     }
