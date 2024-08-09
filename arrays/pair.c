#include <stdio.h>
int main()
{
    int arr[5] = {1, 5, 3, 9, 7};
    int count = 0;
    int  x=12;

    for (int i = 0; i <= 4; i++)
    {
    
        for (int j = i+1; j <= 4; j++)
        {
            
            if (arr[i] + arr[j] ==x)
            {
                count++;
            }
        }
    }printf("%d", count );

    return 0;
}
