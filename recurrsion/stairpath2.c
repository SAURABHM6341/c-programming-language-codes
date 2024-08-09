#include <stdio.h>
int stairs(int n)
{
if (n<=2)
{
    return n;
}
int tot = stairs(n-1)+stairs(n-2);
return tot;
    
}


int main()
{
    int x,sum = 0;
    printf("enter n\n");
    scanf("%d",&x);
   sum = stairs(x);
    printf("%d",sum);
    return 0;
}