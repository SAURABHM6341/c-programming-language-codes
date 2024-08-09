#include <stdio.h>
int main()
{
    int arr[10] = {1, 45, 56, 2, 3, 12, 89, 465, 321456, 852369};
    for (int i = 0; i <= 9; i++)
    {
        if (i % 2 == 0)
        {
            arr[i] = arr[i] + 10;
            printf("%d\n", arr[i]);
        }
        else
        {
            arr[i] = arr[i] * 2;
            printf("%d\n", arr[i]);
        }
    }

    return 0;
}
