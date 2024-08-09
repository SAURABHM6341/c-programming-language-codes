#include <stdio.h>
int main()
{
    int n;
    printf("enter the size of array\n");
    scanf("%d", &n);
    int arr[n];
    printf("enter elements in any order\n");
    for (int i = 0; i <= n - 1; i++)
    {
        printf("a%d\n", i);
        scanf("%d", &arr[i]);
    }
    printf("entered array is \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    int arr1[n];
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            arr1[j] = arr[i];
            j++;
        }
    }
    for (int i = j + 1; i < n; j++)
    {
        arr1[i] = 0;
    }
    printf("the sorted array is \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    return 0;
}