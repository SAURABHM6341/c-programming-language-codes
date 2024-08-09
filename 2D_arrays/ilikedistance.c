#include <stdio.h>
#include <math.h>
int main()
{
    int a, n, m;
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d  %d", &n, &m);
        printf("%d %d", n / 2, m / 2);
    }

    return 0;
}
