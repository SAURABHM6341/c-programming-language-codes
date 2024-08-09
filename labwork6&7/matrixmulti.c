#include <stdio.h>
int main()
{
    int r1, c1;
    int sum;
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
    printf("now 2nd matrix\n");
    int r2, c2;
    printf("enter the number of rows ");
    scanf("%d", &r2);
    printf("enter the number of column ");
    scanf("%d", &c2);
    if (c1 == r2)
    {
        int arr2[r2][c2];
        for (int i = 0; i < r2; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                printf("a%d%d\n", i, j);
                scanf("%d", &arr2[i][j]);
            }
        }
        printf("your entered matrix is\n");
        for (int i = 0; i < r2; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                printf("%d ", arr2[i][j]);
            }
            printf("\n");
        }
        printf("resultant matrix is \n");
        int arr3[r1][c2];
        for (int y = 0; y < r1; y++)
        {
            for (int i = 0; i < r1; i++)
            {
                sum = 0;
                for (int j = 0; j < c2; j++)
                {
                    sum = sum + arr1[y][j] * arr2[j][i];
                }
                arr3[y][i] = sum;
            }
        }
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                printf("%d ", arr3[i][j]);
            }
            printf("\n");
        }
    }
    else
        printf("matrix multiplication is not possible");
    return 0;
}
