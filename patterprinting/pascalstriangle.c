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
    for (int i = 0; i <=n ; i++)
    {
        for (int k = 0; k < n-i; k++)
        {
            printf(" ");
        }
        
        for (int j = 0; j <=i; j++)
        {int factorial= function(i)/(function(j)*function(i-j));
            printf("%d ", factorial);
        }
        printf("\n");
    }
    
    return 0;
}
