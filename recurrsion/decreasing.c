#include <stdio.h>
int dec(int n){
    printf("%d\n", n);
    if(n==0)
    return 0;
    else
    return n-dec(n-1);
}
int main()
{
    int x;
    scanf("%d",&x);
    dec(x);
    return 0;
}
