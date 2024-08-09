// it gives wrong value for some like 15 
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
int combi(int n, int r)
{
    if (r>n)
    {
        return 0;
    }
    return factorial(n)/(factorial(r)*factorial(n-r));
}
int main()
{
    int x,sum = 0;
    printf("enter n\n");
    scanf("%d",&x);
    for (int i = 0; i <=x; i++)
    {
        sum = sum + combi(x-i, i);

    }
    printf("%d",sum);
    return 0;
}