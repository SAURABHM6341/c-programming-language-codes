#include <stdio.h>
int main()
{
    int n;
    printf("enter the term till where you want ap of odd numbers  :  ");
    scanf("%d", &n);
    for (int i = 1; i <= (2 * n - 1); i+=2)

    {

        printf("%d\n", i);
    }

    return 0;
}