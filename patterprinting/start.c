#include <stdio.h>

int main()

{
    // int a=6;
    // int b=7;
    // printf("%p\n%p", &a,&b);
    int b = 5;
    int *x = &b;        // we have make a pointer x in which we have stored the adress of b
    printf("%p\n", x);  // %p used for printing the adress
    printf("%p\n", &b); // if we remove the pointer from 10th line then also it will print adress of b
    printf("%d\n", *x); // here we have instructed to point the number whose adress  is stored in pointer x.
    *x = 34;            // b is changed
    printf("%d", *x);   // here in above line we have modified pointer x and then we print it
    // line 15 me *x ke andar jiska bhi adress pda hua h usko point krke dikha do
    return 0;
}