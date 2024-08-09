#include <stdio.h>
int main()
{ 
    float r,v;
    printf("your desired radius is    ");
    scanf("%f",&r);
    v=((3.14)*r*r*r*4)/3;
    printf("your volume is %f",v);
    return 0;
}
