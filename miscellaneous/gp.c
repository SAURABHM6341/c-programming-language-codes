#include <stdio.h>
int main()
{
    int a,b;
    b=4;
printf(" enter term till where you want to print\n");
scanf("%d", &a);
for (int i = 1; i <= a; i++)
{
  printf("%d\t", b);
  b=b*3;
}



    
    
    return 0;
}