#include <stdio.h>
int main()
{ char a;
printf("enter a character whose ascii value you want to know  ");
scanf("%c",&a);
printf("ascii value of %c is %d", a, (int)a);
    return 0;
}