#include <stdio.h>
int main()
{
    int n, temp, a;

    printf("enter the number of element in array\n");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter the %d element\n", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("enter the round valur\n");
    scanf("%d", &a);

    for (int i = 1; i <= a; i++)
    {
        temp = arr[n - 1];
        for (int j = n - 1; j > 0; j--)
        {

            arr[j] = arr[j - 1];
        }
        arr[0] = temp;
    }

    printf("new array is\n");
    for (int i = 0; i <= n - 1; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}
