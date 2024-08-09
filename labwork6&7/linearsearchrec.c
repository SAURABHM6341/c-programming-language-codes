#include <stdio.h>
int search(int arr[], int size, int a, int b)
{
    if (arr[b] == a)
    {
        printf("entered element is present in array \n");
        printf("entered element's index is %d\n", b);
        return 1;
    }
    else if (b >= size && b != arr[b])
    {
        printf("element not found\n");
        return -1;
    }

    else
    {
        b++;
        search(arr, size, a, b);
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
    search(arr, n, a, 0);
    return 0;
}