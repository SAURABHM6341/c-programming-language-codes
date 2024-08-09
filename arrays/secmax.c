#include <stdio.h>
int main()
{int a,b;
    int arr[5] = {1,2,3,4,5};
    for (int i = 0; i <=4; i++)
    {
        if (arr[i]>arr[0])
        {
        a=arr[i];
        }
        
    }printf("%d\n", a);
    for (int  j = 0; j <=4 ; j++)
    {
        if (arr[j]<a&&arr[j]>arr[0])
        {
            b = arr[j];        }
        
    }printf("%d", b);
    
    
    return 0;
}
