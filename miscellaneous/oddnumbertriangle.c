#include <stdio.h>
int main()
{
    int a;
    printf("enter a number\n");
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d  ", ((2*j)-1));
        }
        printf("\n");
    }

    return 0;
}