#include <stdio.h>
int main()
{

    int a, cp, sp;
    printf(" enter the cost price of product :\t");
    scanf("%d", &cp);
    printf(" enter your selling price :\t");
    scanf("%d", &sp);
    a = (sp - cp);
    if (a < 0)
    {
        printf("you have made loss of rupees %d", -1 * a);
    }
    else if(a = 0){

    printf("you have made neither loss nor profit");
    }
    else
    {
        printf("you have made profit of rupees %d", a);
    }

    return 0;
}