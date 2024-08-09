#include <stdio.h>
int main()
{
    int a, b, c, d;
    char str[4] = {'a', 'b', 'c', 'd'};
    char *f = str;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                for (int l = 0; l < 4; l++)
                {
                    a = *(f + i);
                    b = *(f + j);
                    c = *(f + k);
                    d = *(f + l);
                    if (a != b && a != c && a != d && b != c && b != d && c != d)
                    {
                        printf("%c%c%c%c  ", a, b, c, d);
                    }
                }
            }
        }
        printf("\n");
    }

    return 0;
}