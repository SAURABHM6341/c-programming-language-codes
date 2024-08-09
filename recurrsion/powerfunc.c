#include <stdio.h>
int pew(int a,int b)
{
    if (b==0)
    {
        return 1;
    }
    return a*pew(a,b-1);
    
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
