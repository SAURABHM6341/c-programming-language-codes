#include <stdio.h>
int bina(int low, int high, int a, int arr[], int size)
{
    int mid = (low + high) / 2;
    if (arr[mid] == a || arr[high] == a || arr[low] == a)
    {
        if (arr[mid] == a)
        {
            printf("element found it's index is %d\n", mid);
        }
        else if (arr[high] == a)
        {
            printf("element found it's index is %d\n", high);
        }
        else
        {
            printf("element found it's index is %d\n", low);
        }
        return 1;
    }
   
   else if (arr[mid] != 0 && mid >= high)
    {
        printf("element not found\n");
        return -1;
    }
     else
    {
        if (mid > a)
        {
            low = mid;
        }
        else
        {
            high = mid;
        }
        bina(low, high, a, arr, size);
    }
}
int main()
{
    int n;
    printf("enter size of array\n");
    scanf("%d", &n);
    printf("now enter the elements\n");
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("a%d\n", i);
        scanf("%d", &arr[i]);
    }
    int a;
    printf("enter the element you want to search\n");
    scanf("%d", &a);
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
     printf("sorted rray is \n");
    for (int i = 0; i < n; i++)
    {
        printf(" %d ",arr[i]);
    }
    bina(0, n - 1, a, arr, n);

    return 0;
}