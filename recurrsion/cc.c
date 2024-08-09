#include <stdio.h>
int mazepath(int a, int b, int n, int m)
{
int j=0,k=0;
if (a==n && b==n)
{
    return 1;
}
else if (a==n)
{
    j = j+mazepath(a,b+1,n,m);
}
else if (b==m)
{
    k = k+mazepath(a+1,b,n,m);
}
else {
 j = j+mazepath(a,b+1,n,m);
 k = k+mazepath(a+1,b,n,m);
}
int t = j+k;
return t;}

int main()
{
    int m, n;
    printf("enter the no. of rows");
    scanf("%d", &n);
    printf("enter the no. of columns");
    scanf("%d", &m);
    printf("%d ", mazepath(1, 1, n, m));
    return 0;
}
