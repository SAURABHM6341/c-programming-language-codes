#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int*ptr = (int*) calloc(n,sizeof(int));
    int*p = ptr;
    for (int i = 0; i < n;i++)
    {
        scanf("%d",&(*ptr));
        ptr++;
    }
    int*t = p;
    for (int i = 0; i < n; i++)
    {
        printf("%d",*p);
        p++;
    }
    
    
    return 0;
}