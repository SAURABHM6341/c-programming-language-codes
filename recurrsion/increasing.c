#include <stdio.h>
int inc(int n){
    int b;
    if(n==0)
    return 0;
    b = n-inc(n-1);
     printf("%d\n", b);
    return 0;
}
int main()
{
    int x;
    scanf("%d",&x);
    inc(x);
    return 0;
}