#include <stdio.h>
int main()
{
    int age, marks;
    printf("enter you age\n");
    scanf("%d", &age);
    printf("enter your marks\n");
    scanf("%d", &marks);
    switch (age)
    {
    case 3:
    printf(" the age is 3\n");
   switch (marks)
{    case 75:
    printf("you can participate");
        break;
        default:
        printf("you cannot participate");
}       
break;
        case 18:
        printf("the age is 18\n");
        switch (marks)
        {    case 75:
    printf("you can participate");
        break;
        default:
        printf("you cannot participate");
}       
        
    break;
        case 56:
        printf("your age is 78\n");
        switch (marks)
        {   {    case 75:
    printf("you can participate");
        break;
        default:
        printf("you cannot participate");
}       


        }
       break;
    default:
    printf("no data found\n");
    switch (marks)
    {    case 75:
    printf("you can participate");
        break;
        default:
        printf("you cannot participate");
}       
    
    
        break;
    }







    return 0;
}
