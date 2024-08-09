#include <stdio.h>
int main()
{
    int a, b, c, x, z, y, u, d, e, f, g, h, i, j;
    printf("please enter (x1,y1),(x2,y2),(x3,y3)\n");
    printf("x1 : ");
    scanf("%d", &x);
    printf("x2 : ");
    scanf("%d", &y);
    printf("x3 : ");
    scanf("%d", &z);
    printf("y1 : ");
    scanf("%d", &a);
    printf("y2 : ");
    scanf("%d", &b);
    printf("y3 : ");
    scanf("%d", &c);

    d = b - c;
    e = c - a;
    f = a - b;
    g = x * d;
    h = y * e;
    i = z * f;
    j = g + h + i;

    u = (1 / 2) * j;
    if (u == 0)
    {
        printf("given points are collinear");
    }
    else
    {
        printf("these points are not collinear");
    }

    return 0;
}