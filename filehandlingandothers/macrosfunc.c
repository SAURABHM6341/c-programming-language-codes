// #include <stdio.h>
#define pi 3.14
// float area(float r)
// {
//     return pi*r*r;
// }
// int main()
// {
//     float r = 1/3.14;
//    float x = area(r);
//     printf("%f",x);
//     return 0;
// }
#include <stdio.h>
#define area(r) (pi*r*r)

int main()
{
    printf("%f",area(3.14));
    
    return 0;
}