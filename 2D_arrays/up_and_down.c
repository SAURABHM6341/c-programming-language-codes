#include <stdio.h>
int main()
{
    int m,n;
    printf("enter the no. of rows\n");
    scanf("%d", &m);
    printf("enter the no. of columns\n");
    scanf("%d", &n);
    int arr[m][n];
     for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("a%d%d\n", i, j);
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < n; i++)
    {
       if(i%2==0){
        for (int j = 0; j < m; j++)
        {
            printf("%d ", arr[j][i]);
        }}
        else{
             for (int j = m-1; j >=0; j--)
        {
            printf("%d ", arr[j][i]);
        }
        }
     printf("\n");   
    }
    
    return 0;
}
