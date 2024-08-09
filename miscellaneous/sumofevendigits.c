#include <stdio.h>
int main()
{
    int a,  sum, ld;
    sum = 0;
    printf("enter the number \n");
    scanf("%d", &a);
    while (a != 0)
    {
        ld = a % 10;
        if (ld%2==0)
        {
         sum = sum + ld;
        }
        
        a = a / 10;
    }
    printf("sum of even number in entered digit is %d", sum);

    return 0;
}