#include <stdio.h>
int main()
{ // no additional surcharges of 20% are included
    float a;
    printf("enter the unit consumed\n");
    scanf("%f", &a);
    if (a <= 50)
    {
        printf("you have to pay Rs. %f/-\n", a * 0.50);
    }
    else if (a > 50 && a <= 150)
    {
        float b = a - 50;
        float c = b * 0.75;
        printf("you have to pay Rs. %f/-\n", c + (50 * 0.50));
    }
    else if (a > 150 && a <= 250)
    {
        float b = a - 50;
        float c = b - 100;
        float d = c * 1.20;
        float e = (0.50 * 50) + (0.75 * 100) + d;
        printf("you have to pay Rs. %f/-\n", e);
    }
    else
    {

        float b = a - 50;
        float c = b - 100;
        float d = c - 100;
        float e = d * 1.50;
        float f = (0.50 * 50) + (0.75 * 100) + (1.20 * 100) + e;
        printf("you have to pay Rs. %f/-\n", f);
    }

    return 0;
}
