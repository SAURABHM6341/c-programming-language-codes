#include <stdio.h>
int main()
{
    int a, b,c;
    int num = 0;
    printf("enter the number\n");
    scanf("%d", &a);
    b = a;
    for (int  i = 0; b!=0 ; b = b/10)
    {
        c = b%10;
        num = num *10 + c;
    }
    if (num==a)
    {
         printf("given number is palindrome\n");
    }
    else
    printf("no its not a palindrome\n");
return 0;
}