#include <stdio.h>
int main()
{
    int arr[7] = {1, 45, 78, 98, 65, 32, 21};
    int count = 0;
    int cout = 0;
    for (int i = 0; i <= 6; i++)
    {
        if (i % 2 == 0)
        {
            count = count + arr[i];
        }
        else
        {
            cout = cout + arr[i]; 
        }
    }
    printf("difference is  %d ", count - cout);
    {
        /* code */
    }

    return 0;
}
