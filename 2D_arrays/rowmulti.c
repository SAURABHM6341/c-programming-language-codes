#include <stdio.h>
int main()
{
    int r1, c1;
    int multi = 1;
    int multi1 = 1;
    printf("enter the number of rows ");
    scanf("%d", &r1);
    printf("enter the number of column ");
    scanf("%d", &c1);
    int arr1[r1][c1];
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("a%d%d\n", i, j);
            scanf("%d", &arr1[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            if (i%2==0)
            {
                multi = multi*arr1[i][j];
            }
            else 
            {
                multi1 = multi1*arr1[i][j];
            }
        }
        
    }
 printf("%d", multi*multi1);
    
    return 0;
}