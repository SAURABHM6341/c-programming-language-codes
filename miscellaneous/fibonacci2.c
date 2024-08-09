#include<stdio.h>
int main()
{int a,b,c,d;
b=1;
c=1;
   printf("enter the term you want to know");  
   scanf("%d", &a);
   if (a==1||a==2)
   {
    printf("term is 1");

   }
   else{
    for (int i = 3; i <=a; i++)
    {
        d=b+c;
        b=c;
        c=d;
    }
    printf("your answer is %d", d);
   }
   
    return 0;
}
