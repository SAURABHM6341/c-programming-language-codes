#include <stdio.h>
int gcd(int n1, int n2, int b)
{
    if (n2 >= n1)
    {
        return b;
    }
    if (n1 % n2 == 0)
    {
        b = n2;
    }
    n2++;
    gcd(n1, n2, b);
}
int main()
{
    int n, a, b;
    printf("enter the two numbers\n");
    scanf("%d", &n);
    scanf("%d", &a);
    if (n > a)
    {
       b = gcd(a,1,1);
       printf("gcd of %d, %d is %d\n",n,a,b);
    }
    else
    {
       b = gcd(n,1,1);
       printf("gcd of %d, %d is %d\n",n,a,b);
    }

    return 0;
}