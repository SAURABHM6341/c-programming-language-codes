#include <stdio.h>
int main()
{
    int n;
    printf("enter size of array\n");
    scanf("%d",&n);
    printf("now enter the elements\n");
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("a%d\n",i);
        scanf("%d",&arr[i]);
    }
    int a;
    printf("enter the element you want to search\n");
    scanf("%d",&a);
    for (int  i = 0; i < n; i++)
    {
        if (arr[i] == a)
        {
            printf("elemeent found\tindex of entered number is %d\n",i);
        }
        
    }
    
    
    return 0;
}