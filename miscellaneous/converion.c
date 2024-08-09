#include <stdio.h>
int main()
{
    float a, b;
    int i;
    while (1)
    {

        printf("please enter a number from 1 to 10 for conversion\n 1 for km to miles and 2 for vice versa \n 3 for  foot to inch and 4 for vice versa\n 5 for kg to pound and 6 for vice versa\n 7 for inch to cm and 8 for vice versa\n 9 for metre to inch and 10 for vice versa\n press 12 to exit\n");
        scanf("%f", &a);

        if (a == 1)
        {
            printf("enter the value you want to convert\n");
            scanf("%f", &b);
            printf("%fkm is %f miles", b, b / 1.609);
        }
        else if (a == 2)
        {
            printf("enter the value you want to convert\n");
            scanf("%f", &b);
            printf("%fmiles is %f km", b, b * 1.609);
        }
        else if (a == 3)
        {
            printf("enter the value you want to convert\n");
            scanf("%f", &b);
            printf("%ffoot is %finch", b, b * 12);
        }
        else if (a == 4)
        {
            printf("enter the value you want to convert\n");
            scanf("%f", &b);
            printf("%finch is %ffoot", b, b / 12);
        }
        else if (a == 5)
        {
            printf("enter the value you want to convert\n");
            scanf("%f", &b);
            printf("%fkg is %fpound", b, b * 2.20462);
        }
        else if (a == 6)
        {
            printf("enter the value you want to convert\n");
            scanf("%f", &b);
            printf("%fpound is %fkg", b, b / 2.20462);
        }
        else if (a == 7)
        {
            printf("enter the value you want to convert\n");
            scanf("%f", &b);
            printf("%finch is %fcm", b, b * 2.54);
        }
        else if (a == 8)
        {
            printf("enter the value you want to convert\n");
            scanf("%f", &b);
            printf("%fcm is %finch", b, b / 2.54);
        }
        else if (a == 9)
        {
            printf("enter the value you want to convert\n");
            scanf("%f", &b);
            printf("%fmetre is %finch", b, b * 39.3701);
        }
        else if (a == 10)
        {
            printf("enter the value you want to convert\n");
            scanf("%f", &b);
            printf("%finch is %fmetre", b, b / 39.3701);
        }
        else if (a == 12)
        {
            printf("thank you for using me");
            return 0;
        }
        else
        {
            printf("you have entered invalid number ");
        }
        
    }
}