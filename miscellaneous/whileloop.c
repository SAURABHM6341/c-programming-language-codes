#include <stdio.h>
int main()
{
    int a, b = 0;
    printf("enter the no. you want to see in ascending order\n");
        scanf("%d", &a);
    while (b <= 10)
    {
        printf("%d+%d=%d\n", a, b, a + b);
        b = b + 1;
    }

    return 0;
}
