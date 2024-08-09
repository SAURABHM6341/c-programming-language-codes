#include <stdio.h>
int main()
{ int arr[4];
    for (int i = 0; i < 4; i++)
    {
        printf("enter the element number %d\n", i+1);
        scanf("%d", &arr[i]);
    }
for (int  i = 0; i < 4; i++)
{
    printf("%d ", arr[i]);
}

    return 0;
}