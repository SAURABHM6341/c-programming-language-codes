#include <stdio.h>
int main()
{
    int m1, n1,r, c, m, n;
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
    printf("starting index in ij form\n");
    scanf("%d %d", &m, &n);
    printf("ending index in ij form\n");
    scanf("%d %d", &m1, &n1);
    int d = 0;
    for (int i = m; i <= m1; i++)
    {
        for (int j = n; j <= n1; j++)
        {
            d = d + arr[i][j]; 
        }
        
    }
    printf("%d\n", d);

    return 0;
}
