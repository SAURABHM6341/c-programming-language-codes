#include <stdio.h>
int fibo(int x)
{
if (x==1)
{
    return 0;
}
else if (x==2)
{
    return 1;
}
return fibo(x-1)+fibo(x-2);

}
int main()
{
    int a;
    printf("enter the term (note: we are inculding zero in fibonacci)\n");
    scanf("%d",&a);
    printf("%d", fibo(a));
    return 0;
}
