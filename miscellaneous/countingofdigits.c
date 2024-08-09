#include<stdio.h>
int main()
{int a,b;
    printf("write the no.\n");
    scanf("%d", &a);
    int count=0;
    while (a!=0)
    {
        a=a/10;
        count++;
        
    }
    printf("entered number is %d digit number", count);
    
    
    return 0;
}
