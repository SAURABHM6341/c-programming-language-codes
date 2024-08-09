#include <stdio.h>
int bina(int p, int q, int sum)
{
    if (q<=0)
    {
        return sum;
    }
    else
    {
sum = sum + (q%2) * p;
        q = q/2;
        p = p * 10;
        return bina(p,q,sum);
    }
}
int main()
{
    int a, q, sum, p;
    p = 1;
    sum = 0;
    printf("enter the decimal number you want to convert into binary\n");
    scanf("%d", &a);
    printf("binary of enterd number is %d\n",bina(1,a,0));
   
    return 0;
}
