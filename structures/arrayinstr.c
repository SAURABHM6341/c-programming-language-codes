#include<stdio.h>
#include <string.h>
int main()
{
    typedef struct bok
    {
        int s;
        int c;
        char t[51];
        float p;
    }b;
    //now if i have 100 book then i have to declare them again and again hence make array
    b arr[3];
    arr[0].c = 34;
    //arr[0].t = 'auy'; it will show error so we have to use strcpy
    strcpy(arr[0].t,"ayush");
    arr[0].s = 34;
    arr[0].p = 34.90;
    printf("%s", arr[0].t);
    return 0;
}
