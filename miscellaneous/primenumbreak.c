#include <stdio.h>
int main()
{
    int a;
printf("enter the numbere you want to check\n");
scanf("%d", &a);
for (int i = 2; i < a; i++)
{
    if (a%i==0)
    {
        printf("entered number is composite");
        break;
    }
    else {
        printf("entered number is prime");
        break;
    }
}


    
    
    return 0;
}