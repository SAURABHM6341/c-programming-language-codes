#include <stdio.h>
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

    int low = 0;
    int high = n - 1;
    while (low != high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == a || arr[high] == a || arr[low] == a)
        {
            if (arr[mid] == a)
            {
                printf("\nelement found it's index is %d\n", mid);
            }
            else if (arr[high] == a)
            {
                printf("\nelement found it's index is %d\n", high);
            }
            else
            {
                printf("\nelement found it's index is %d\n", low);
            }
            break;
        }
      
        else if (low == mid||high == mid||high == low)
        {
            printf("\nelement not found\n");
            break;
        }
           else
        {
            if (arr[mid] > a)
            {
                low = mid;
            }
            else
            {
                high = mid;
            }
        }
    }
    return 0;
}