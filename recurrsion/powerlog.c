#include <stdio.h>
int pew(int a,int b)
{
    
    if (b==0)
    {
        return 1;
    }
    int c = pew(a,b/2);
    if (b%2==0)
    {
        return c*c;
    }
    else
    return c*c*a;
    
}

int main()
{
    int x,y;
    printf("enter number  \n");
    scanf("%d",&x);
    printf("enter power  \n");
    scanf("%d",&y);
    printf("%d",pew(x,y));
    return 0;
}
