#include <stdio.h>
int main()
{
float a,b,c,d,e,f;
printf("enter 1st side \n");
scanf("%f", &a);
printf("enter 2nd side \n");
scanf("%f", &b);
printf("enter 3rd side \n");
scanf("%f", &c);
if (a+b>c||b+c>a||a+c>b)
{
    printf("these are the sides of triangle");
}
else{
    printf("these are not the sides of triamgle");
}


    return 0;
}