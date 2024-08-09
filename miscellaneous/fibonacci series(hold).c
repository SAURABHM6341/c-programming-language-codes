#include <stdio.h>

// by shrayaansh aanand
int fibonacci(int num)
{
    int i, a, b, c;
    i = 3, a = 1, b = 1;
    if (num == 1)
        return 1;
    else if (num == 2)
        return 1;
    else
        while (i <= num)
        {
            c = a + b;
            a = b;
            b = c;
            i++;
        }
    return c;
}
int main()
{
    int n, z;
    printf("Enter number\t");
    scanf("%d", &n);
    z = fibonacci(n);
    printf("The required term %dth is %d", n, z);
    return 0;
}
