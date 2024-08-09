#include <stdio.h>
int main()
{
    int a,b;
    printf("enter year in numeric form\n");
    scanf("%d", &a);
    b=a%4;
    if (b==0)
    {
        printf("%d is a leap year", a);
    }
    else{
        printf( "%d is not a leap year", a);
    }
    return 0;
}
