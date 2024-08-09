#include <stdio.h>
int main()
{
    int size;
    printf("enter your waist size \n");
    scanf("%d", &size);
    printf("you have entered %d as your waist size\n", size);
    if (size > 28)
    {
        printf("you can buy it\n thank you for coming!");
    }

    else if (size > 20)
    {
        printf("you can buy in section 2 please go through it thank you");
    }
    else
    {
        printf("please wait our agent is arriving on this counter to help you shortly");
    }
    return 0;
}
