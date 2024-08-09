#include <stdio.h>
int factorial(int b)
{ int c;
c=1;
    for (int i = 1; i <= b; i++)
    {
         
         c=c*i; 
    }printf("%d",c);
}
int main()
{
    int a;
    printf("enter the number you want factorial of : ");
    scanf("%d", &a);
    factorial(a);

    return 0;
}