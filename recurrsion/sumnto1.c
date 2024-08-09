#include <stdio.h>
int sum(int x)
{
    if (x==0)
    {
        return 0;
    }
    return x+sum(x-1);
}
int main()
{
    int n;
    printf("enter the number\n");
    scanf("%d", &n);
    printf("%d",sum(n));
    return 0;
}
