#include <stdio.h>
int main()
{
    int b = 0, a;
    printf("enter the number you want ro check \n");
    scanf("%d", &a);
    for (int i = 2; i <= a; i++)
    {
        if (a % i == 0)
            b++;
    }
    if (b == 1)
    {
        printf("entered number is prime");
       
    }
    else
    {
        printf(" your entered number is composite");
    }

    return 0;
}