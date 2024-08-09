#include <stdio.h>
int main()
{
    int a,b;
printf("type number you want to check\n");

scanf("%d",&a);
b=a%2;
if (b==0)
{
printf("entered number is even");
}
else
{printf("entered no. is odd");}

    
    
    return 0;
}