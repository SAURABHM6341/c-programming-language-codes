#include <stdio.h>
int main()
{
    int a;
    printf("enter the number");
    scanf("%d", &a);
    int n = 1;
    for (int i = 1; i <= a; i++)
    {

        for (int k = 1; k <= a - i; k++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", n);
            n++;
        }

        printf("\n");
    }

    return 0;
}
