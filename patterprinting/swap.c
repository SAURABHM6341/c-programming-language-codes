#include <stdio.h>
int main()
{
    // // int a, b;
    // // printf("enter 'a'  ");
    // // scanf("%d", &a);
    // // printf("enter 'b' (b>a)  ");
    // // scanf("%d", &b);
    // // a = a + b;
    // // b = a - b;
    // // a = a - b;
    // // printf("a is %d b is %d ", a, b);
    // // // 2nd method
    // // printf("enter a  ");
    // // scanf("%d", &a);
    // // printf("enter b  ");
    // // scanf("%d", &b);
    // // printf("a is %d and b is %d", b,a);
    // // 3rd method}
    //  void swap(int *a, int *b)

    //  {
    //      int temp; // int * means it stores adress of values
    //      temp = *a; //int ** means it stores adress of pointers
    //      *a = *b;
    //      *b = temp;

    //      return;
    //  }
    //  int main()
    //  {int a=5;
    //  int b=6;
    //  swap(&a,&b);
    //      printf("%d",a);
    //      printf("%d", b);
    int a = 25;
    int *x = &a;
    int **y = &x;
    int ***z=&y;
    printf("%d\n", **y);
    printf("%p\n", *y);// we have to use %p because we are printing address of x
    printf("%d", ***z);
    
    return 0;
}
