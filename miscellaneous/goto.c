#include <stdio.h>
int main()
{
    int num;
// label:
// printf("we are using goto statements\n");
// goto end;
// printf("i am sorry sir we cannot let you go further from here\n");
// goto label;
// end:
// printf("we are at end");
for (int i = 0; i < 4; i++)
{
    printf("%d\n", i);
    for (int j = 0; j < 3; j++)
    {
        printf("enter the number. enter 12 to exit \n");
        scanf("%d", &num);
        if (num==12)
        {
            goto end;
        }
    
    }
    
}


end:



    return 0;
}
