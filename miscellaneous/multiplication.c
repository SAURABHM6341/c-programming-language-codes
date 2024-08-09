#include <stdio.h>

int main()
{
    int a, b;
    printf("enter the number you want multiplication table of\n ");
    scanf("%d", &a);
    printf("mutiplication table of %d is \n", a);
    b = 1;
    do
    {
        printf("%dx%d=%d\n", a, b, a * b);
        b = b + 1;
    } while (b <= 10);

    return 0;
}
