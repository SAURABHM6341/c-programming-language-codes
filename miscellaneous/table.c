#include <stdio.h>
int main()
{int a;

printf("enter the number you want multiplication table of\n ");
    scanf("%d", &a);
    for (int i = 1; i < 11; i++)
    {
        printf("%d x %d is = %d\n", a,i,a*i);
    }
    
    
    return 0;
}