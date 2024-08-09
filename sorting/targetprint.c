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
    for (int i = 0; i < n; i++)
    {
        int j = 0;
        for (int k = i+1; k < n; k++)
        {
            if (arr[i]<arr[k])
            {
                j++;
            }
            
        }
        if(j==n-3){
            printf("3rd smallest number in enterd array is %d\n",arr[i]);
            break;
        }
    }
    return 0;
}