#include <stdio.h>
int main()
{
    int i, j;
    for (i = 0, j = 45; i <= 89 , j<1000; i++, j++)
    {
        printf("%d, %d\n", i, j);
    }
// exp 1 2 3 all are optional if you remove exp 1 then programme will run as before
//when you remove exp 2(condition for termination of programme) then it will be a endless loop
//exp 3 is condition
    return 0;
}
