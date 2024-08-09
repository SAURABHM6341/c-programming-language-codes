#include <stdio.h>
int factorial(int n)
{
    if (n==1||n==0)
    {
        return 1;
    }
    else
    return n*factorial(n-1);
}
int main()
{
    int x;
    printf("enter n\n");
    scanf("%d",&x);
    int fact  = factorial(x);
    printf("%d", fact);
    return 0;
}
