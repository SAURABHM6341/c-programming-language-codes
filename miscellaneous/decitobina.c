#include <stdio.h>
int main()
{
    int a, q, sum, p;
    p = 1;
    sum = 0;
    printf("enter the decimal number you want to convert into binary\n");
    scanf("%d", &a);
    q = a;
    for (int i = 0; q > 0; i++)
    {
        sum = sum + (q % 2) * p;
        q = q / 2;
        p = p * 10;
    }
    printf("%d",sum);
    return 0;
}
