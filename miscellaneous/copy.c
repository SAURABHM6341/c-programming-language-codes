#include <stdio.h>
int main()
{
    int a, b, sum;
    sum = 0;
    printf("enter the number\n");
    scanf("%d", &a);
    b = a;
    
    for (int i=0;b!=0;)
    {
        int c = b % 10;
        sum = sum + (c* c * c);
        b = b / 10;
    }
    if (sum == a)
    {
        printf("entered number is armstrong number");
    }
    else
    {
        printf("entered number is  not armstrong number");
    }
    return 0;
}