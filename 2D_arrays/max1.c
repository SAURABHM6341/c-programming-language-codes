#include <stdio.h>
int main()
{
    int m, n,c,d;
    printf("enter the order of matrices mxn rows and column respectively\n");
    scanf("%d", &m);
    scanf("%d", &n);
    int arr1[m][n];
    for (int i = 0; i <= m - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            printf("enter the %d%d element\n", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }
    int a = arr1[0][0];
    for (int i = 0; i <= m - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            if (arr1[i][j] > a)
                a = arr1[i][j];
                c = i;
                d = j;
        }
    }
    printf("max element of inputted row is %d and it's index is (%d,%d)", a,c,d);
    return 0;
}
