#include <stdio.h>
int prif(int a)
{
    for (int i = 1; i <= a; i = i + 1)
    {
        if (a % i == 0)
        {
            printf("%d\n", i);
        }
        else
            continue;
    }
    return 0;
}
int main()
// traditional method
{
    //int b;
    // int a;
    //  printf("enter the number you want to know the  prime factor of : ");
    //  scanf("%d" , &b);
    // for (int  i = 1; i <=a ; i=i+1)
    // {
    // if (a%i==0)
    // {
    //     printf("%d\n", i);
    // }
    // else continue;
    // }
    // // using functions see first line
    int b;
    printf("enter the number you want to know the  prime factor of : ");
     scanf("%d" , &b);
    prif(b);

    return 0;
}