#include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 5, 9};
    int count = 0;
    for (int i = 0; i <= 4; i++)
    {
        if (arr[i] >= 5)
        {
            count++;
        }
        
    }printf("%d", count);

    return 0;
}
