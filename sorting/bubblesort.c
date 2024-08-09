#include <stdio.h>
#include <stdbool.h>
int main()
{
    // n elements denge unme n-1 pass lgane h maximum
    // in bubble sort after each pass lagest element reach its place so don't check for them
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
    int t = n;
    for (int i = 0; i < t; i++)
    {
       
        for (int j = 0; j < t; j++)
        {
            for (int k = j + 1; k < t; k++)
            {
                if (arr[j] > arr[k])
                {
                    int temp = arr[j];
                    arr[j] = arr[k];
                    arr[k] = temp;
                }
            }
           
        }
        t--;
    }
    printf("the sorted array is \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    // time complexity of bubble sort is n^2;
    // maximum no. of swaps in worst cases is (n(n-1))/2
    return 0;
}//time complexity of best case is O(1)
//space complexity is O(1) because no new memory is used