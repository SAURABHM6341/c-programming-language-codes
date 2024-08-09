#include <stdio.h>

int min(int a, int b)
{
    if (a > b)
    {
        return b;
    }
    else
        return a;
}

int hcf(int num1, int num2)
{
    int e;
    for (int i = 1; i <= min(num1, num2); i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            e = i;
        }
        else
            continue;
    }
    return e;
}
int main()
{
    int a, b;
    printf(" enter the numbers you want hcf of : ");
    scanf("%d %d", &a, &b);
    hcf(a, b);
    int g = hcf(a, b);
    printf("%d", g);
    return 0;
}