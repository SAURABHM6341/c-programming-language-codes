#include <stdio.h>
#include <stdlib.h>
int main()
{
    
    int *ptr = (float *)calloc(25, sizeof(float)); 
    // it will reserve memory for 25 float variable and if no value assigned by default zero will be stored
    // refer to screenshots
    int *ptr1 = (int *)malloc(25 * sizeof(int));
    //it will reserve memory for 25 integerand can be used for float 
    //also i have chosen int,and if no value assigned by default garbage value will be stored
    printf("%d\n",*ptr);
    printf("%d",*ptr1);
    return 0;
}//include standard library header file.