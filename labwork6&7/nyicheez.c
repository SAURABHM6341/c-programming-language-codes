#include <stdio.h>
int main()
{
    int d;
    for (int i = 1; i <= 15; i++)
    {
        printf("%c ", 64 + i);
    }
    printf("\n");
    int c = 1;
    for (int i = 0; i < 7; i++)
    {

        for (int j = 0; j < 7 - i; j++)
        {
            printf("%c ", 65 + j);
            d = 65 + j;
        }
        for (int k = 1; k <= c; k++)
        {
            printf("  ");
        }
        for (int j = 0; j < 7 - i; j++)
        {
            printf("%c ", d - j);
        }
        c = c + 2;
        printf("\n");
    }

    return 0;
}