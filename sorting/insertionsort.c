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

    for (int j = 1; j < n; j++)
    {
        int a = j;
        while (a != 0)
        {
            if (arr[a - 1] > arr[a])
            {
                int temp = arr[a];
                arr[a] = arr[a - 1];
                arr[a - 1] = temp;
                a--;
            }
            else
            {
                a--;
                break;
            }
        }
    }

    printf("the sorted array is \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    // time complexity worst,avg case = O(n^2)
    // best case = O(n)
    //space complexity for all = O(1)
    //stable bhi h
    //n-1 passes

    return 0;
}