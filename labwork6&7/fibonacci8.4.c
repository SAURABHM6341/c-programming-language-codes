#include <stdio.h>
int fibo(int a)
{
    if (a == 0)
    {
        return 0;
    }
    else if (a == 1)
    {
        return 1;
    }
    else
    {
        return fibo(a - 1) + fibo(a - 2);
    }
}
int main()
{
    int n;
    printf("enter the number \n");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i <=n ; i++)
    {
        if (n==fibo(i))
        {
            printf("entered number is fibonacci\n");
            break;
        }
        
    }
    
    return 0;
}