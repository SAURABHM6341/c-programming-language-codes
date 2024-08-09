#include <stdio.h>
int main()
{
    int a, reverse, ld;
    reverse = 0;
    printf("enter the number \n");
    scanf("%d", &a);
    while (a != 0)
    {
        ld = a % 10;

        reverse = reverse * 10 + ld;

        a = a / 10;
    }
    printf(" reverse of entered digit is %d", reverse);

    return 0;
}