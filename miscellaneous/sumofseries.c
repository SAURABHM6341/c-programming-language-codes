#include <stdio.h>
int main()
{
    int n, sum;
    sum=0;
    printf("series - 1-2+3-4+5-6+7-8........n terms\n");
    printf("enter the term till where you want operation\n");
    scanf("%d", &n);
   if (n%2==0)
   {
    printf("sum of series till entered term is %d ", -1*(n/2));
   }
   else{
    printf("sum of series till enterd term is %d", (-1*(n-1)/2)+n);
   }
    return 0;
}