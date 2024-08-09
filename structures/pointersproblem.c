#include <stdio.h>
typedef int* point;
int main()
{
    int a = 7, b = 8;
    //int* x,y;//int*x and int y we cannot declare two pointer at once typedef is used
    point x = &a, y = &b;
    printf("%p %p", x ,y);
    return 0;
}
