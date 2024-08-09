#include <stdio.h>
int main()
{

    int sum = 0;
    int n, d;
    scanf("%d", &n);
    int arr1[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }
   d = arr1[0];
        for (int j = 0; j <= n - 1; j++)
        {
            if (arr1[j] > d)
            {
                d = arr1[j];
            }
    }
         for (int i = 0; i < n; i++)
     {
         sum = d - arr1[i] + sum;
     }
     printf("%d", sum);

    return 0;
}
