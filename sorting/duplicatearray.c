#include <stdio.h>
int main()
{
    int n;
    printf("enter the size of array\n");
    scanf("%d", &n);
    int arr[n];
    printf("enter elements in any order\n");
    for (int i = 0; i < n; i++)
    {
        printf("a%d\n", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                printf("dupilcate element is %d\n", arr[j]);
                break;
            }
        }
    }

    return 0;
}
