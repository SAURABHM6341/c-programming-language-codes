#include <stdio.h>

int main()
{
    int a = 23;
    float b = 4.6;
    // b = 5.2;
// if we run above code then it will run easily but 
//when i put const n starting of int or float then after running it will give error assignment of read only variable
const float d =5.6;
//d = 8.9; wrong because d is constant
#define pr 4.09
printf("%f", pr);
//pr = 5.89; cannot run since pr is already defined and constant

// escape sequence character----------
printf("my \a backspace \t %f", pr);








    return 0;
}
