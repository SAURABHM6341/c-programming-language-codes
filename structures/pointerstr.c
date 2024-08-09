#include <stdio.h>
#include <string.h>
int main()
{
struct p
{
    int a;
    int b;
    char w[8];
};
    struct p l;
    l.a = 56;
    l.b = 89;
    strcpy(l.w,"saiya");
    struct p* x = &l;
    printf("%p\n",x);//if i a putting & before x address is changing
    printf("%p\n",&l.a);
    printf("%p\n",&l.b);
    printf("%p\n",&l.w);
    return 0;
}