#include <stdio.h>
int main()
{
    int m, n;
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
    // spiral_print
    int maxr = m-1;
    int minr = 0;
    int minc = 0;
    int maxc = n-1;
    int tne = m*n;
    int count = 0;
    while (count<tne)
    {
        for (int i = minc; i <=maxc ; i++)
        {
            printf("%d ", arr[minr][i]);
            count++;
            
        }
        minr++;
        if (count>=tne)
        {
            break;
        }
        
        for (int i = minr; i <=maxr ; i++)
        {
             printf("%d ", arr[i][maxc]);
            count++;
        }
        maxc--;
          if (count>=tne)
        {
            break;
        }
         for (int i = maxc ; i >=minc ; i--)
        {
            printf("%d ", arr[maxr][i]);
            count++;
        }
        maxr--;
          if (count>=tne)
        {
            break;
        }
         for (int i = maxr; i >=minr ; i--)
        {
            printf("%d ", arr[i][minc]);
            count++;
        }
        minc++;
          if (count>=tne)
        {
            break;
        }
        
    }
    
    return 0;
}
