#include <stdio.h>
int main()
{
    int a,b;
    b = 4;
    printf("enter the term till where you want AP of common difference 3\n");
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        printf("%d\n", b);
        b=b+3;
    }

    return 0;
}