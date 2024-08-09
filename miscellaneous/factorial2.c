#include<stdio.h>
int main()
{int f;
int fact=1;
    printf("enter the number you want factorial of\n");
    scanf("%d", &f);
   if (f==0||f==1)
   {
    printf("answer is 1");
   }else
   {
for (int i = 2; i <=f; i++)
{
    fact=fact*i;
}printf("your answer is %d", fact);


   }
   
    
    return 0;
}
