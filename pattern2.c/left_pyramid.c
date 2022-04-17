#include <stdio.h>
int main()
{
    int n1, n2;
    int z = 1;
    printf("enter the number of  columns in the pattern\n");
    scanf("%d", &n2);
    int i, j, k;
    for (i = 1; i <= ((2 * n2) - 1); i++)
    {
        if (i <= n2)
        {
            for (j = 0; j < i; j++)
            {
                printf("*");
            }
        }
        else
        {

            for (k = 1; k <= (i - 2 * z); k++)
            {
                printf("*");
            }
            z = z + 1;
        }

        printf("\n");
    }
    return 0;
}