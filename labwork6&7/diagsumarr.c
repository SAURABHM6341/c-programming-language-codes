#include <stdio.h>
int main()
{
    int r1, c1;
    int sum = 0;
    int sum2 = 0;
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
    }
    printf("your entered matrix is\n");
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                printf("%d ", arr1[i][j]);
            }
            printf("\n");
        }
    for (int i = 0, j = c1 - 1; i < r1 && j < c1; i++, j--)
    {
        sum = sum + arr1[i][j];
    }
    for (int i = 0, j = 0; i < r1 && j < c1; i++, j++)
    {
        sum2 = sum2 + arr1[i][j];
    }
    printf("the sum of diagonal elements from L to R is %d\n", sum2);
    printf("the sum of diagonal elements from R to L is %d\n", sum);

    return 0;
}
