#include <stdio.h>
int main()
{
    int arr[10] = {32, 33, 66, 98, 95, 97, 45, 89, 25, 41};
    for (int i = 0; i <= 9; i++)
    {
        if (arr[i] < 35)
        {
            printf("%d\n", i);
        }
      
    }

    return 0;
}