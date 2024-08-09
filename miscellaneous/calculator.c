#include <stdio.h>
int main()  
// kg to grams 
{ float a,b; 
int t;
char g,j,k,l;
/*printf("enter the value in kilograms\n");  
 scanf("%f", &a);       
  printf("value in grams is %f grams", (a * 1000));*/   
  // calculator
  printf("enter number 1\n");
  scanf("%f", &a);
  
  printf("enter number 2\n");
  scanf("%f", &b);
  printf("enter the operations (enter 7 for addition,  8 for subtraction,  9 for multiplication, 6 for divide only\n");
  scanf("%d", &t);
  if (t == 7)
  {
    printf("your answer is %f", a+b);}

    else if  (t == 8)
    
   {     printf("your answer is %f", a-b);
   }
     else if (t==9)
        {printf("your answer is %f", a*b);}
        else
        printf("your answer is %f", a/b);
   return 0;}
