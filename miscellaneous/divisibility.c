#include <stdio.h>
int main()
{
    int a,b,c;
printf("enter the number\n");
scanf("%d", &a);
b=a%5;
c=a%3;
if (b==0&&c==0)
{
    printf("number is divisible by 3 and 5 both");
}
else if (b==0)
{
    printf("the number is divisible by 5 only");
}
else if (c==0)
{
    printf("the number is divisible by 3 only");
}
else {
    printf("number is not divisible by 5 and 3 ");
}

    
    
    return 0;
}