#include <stdio.h>
int function(int x)
{
     int fact = 1;
    for (int i = 2; i <= x; i++)
    {
       
        fact = fact * i;
        
    }return fact;
}

int main()
{
    int n, r;
    printf("enter  N = ");
    scanf("%d", &n);
    printf("enter  R = ");
    scanf("%d", &r);
 int factorial=function(n)/(function(r)*function(n-r));
 printf("%dC%d is equal to %d ",n,r,factorial );
    return 0;
}
