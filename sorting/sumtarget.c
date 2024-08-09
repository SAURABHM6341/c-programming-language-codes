#include <stdio.h>
int main()
{
    int n;
    printf("enter the size of array\n");
    scanf("%d", &n);
    int arr[n];
    printf("now enter the elements\n");
    for (int i = 0; i < n; i++)
    {
        printf("a%d\n", i);
        scanf("%d", &arr[i]);
    }
    int a;
    printf("enter the number \n");
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
    printf("sorted array is \n");
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", arr[i]);
    }
    printf("\n");
    int low = 0;
    int high = n - 1;
    while (arr[low] != arr[high])
    {
        int mid = (low + high) / 2;
        if (arr[low] + arr[mid] == a || arr[high] + arr[mid] == a || arr[low] + arr[high] == a)
        {
            if (arr[low] + arr[mid] == a)
            {
                printf("%d + %d = %d\n", arr[low], arr[mid], a);
                break;
            }
            if (arr[high] + arr[mid] == a)
            {
                printf("%d + %d = %d\n", arr[high], arr[mid], a);
                break;
            }
            if (arr[high] + arr[low] == a)
            {
                printf("%d + %d = %d\n", arr[low], arr[high], a);
                break;
            }
        }
        else if (low == mid||high == mid||high == low)
        {
            printf("sum is not possible\n");
            break;
        }
        else
        {
            if (arr[mid] >= a)
            {
                high = mid;
            }
            else
            {
                low = mid;
            }
        }
    }

    return 0;
}