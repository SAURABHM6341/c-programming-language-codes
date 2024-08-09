#include <stdio.h>
int main()
{
    int n;
    printf("enter the order of matrices you want to add\n");
    scanf("%d",&n);
    int arr1[n][n];
    int arr2[n][n];
    int arr3[n][n];
    for (int i = 0; i <=n-1; i++)
    {
        for (int j = 0; j <=n-1; j++)
        {
            printf("enter the %d%d element\n", i,j);
            scanf("%d",&arr1[i][j]);

        }
        
    }
    printf("now write for 2nd matrix\n");
    for (int i = 0; i <=n-1; i++)
    {
        for (int j = 0; j <=n-1; j++)
        {
            printf("enter the %d%d element\n", i,j);
            scanf("%d",&arr2[i][j]);

        }
        
    }
    for (int i = 0; i <=n-1 ; i++)
    {
        for (int j = 0; j <= n-1 ; j++)
        {
            arr3[i][j] = arr2[i][j]+arr1[i][j];
            printf("%d  ", arr3[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
