#include <stdio.h>
int main()
{
    int r, c, a;
    printf("enter the no. of row and then column\n");
    scanf("%d %d", &r, &c);
    int arr[r][c];
    for (int i = 0; i <= r - 1; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("a%d%d\n", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    int arr1[c][r];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            arr1[j][i] = arr[i][j];
        }
    }

    printf("the transpose of entered matrix is \n");
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            printf("%d  ", arr1[i][j]);
        }
        printf("\n");
    }

    return 0;
}
