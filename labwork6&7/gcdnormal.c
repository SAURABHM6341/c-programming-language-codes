#include <stdio.h>
int main()
{
    int n, a, b;
    printf("enter the two numbers\n");
    scanf("%d", &n);
    scanf("%d", &a);
    if (n > a)
    {
        for (int i = 1; i <= a; i++)
        {
            if (n % i == 0 && a % i == 0)
            {
                b = i;
            }
        }
        printf("gcd is %d\n", b);
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0 && a % i == 0)
            {
                b = i;
            }
        }
        printf("gcd is %d\n", b);
    }

    return 0;
}