#include <stdio.h>
int main()
{
    int a, b;
    printf("enter number of rows\n");
    scanf("%d", &a);
    printf("enter number of columns\n");
    scanf("%d", &b);
    if (a == b)
    {
        int arr[a][b];
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                printf("enter the element of index arr[%d][%d]\n", i, j);
                scanf("%d", &arr[i][j]);
            }
        }
        printf("your entered matrix is\n");
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                printf("%d ", arr[i][j]);
            }
            printf("\n");
        }
        printf("upper triangular matrix is\n");
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                if (i < j)
                {
                    printf("%d ", arr[i][j]);
                }
                else
                    printf("  ");
            }
            printf("\n");
        }
        printf("lower triangular matrix is\n");
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                if (i > j)
                {
                    printf("%d ", arr[i][j]);
                }
                else
                    printf("  ");
            }
            printf("\n");
        }
    }
    else
    {
        printf("this operation cannot  be execute");
    }
    return 0;
}