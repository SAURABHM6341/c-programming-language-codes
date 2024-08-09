#include <stdio.h>
#include <string.h>
int main()
{
    typedef struct playerrecord
    {
        char name[50];
        int age;
        int testmatch;
        float avgscr;
    } pr;
    pr p[3];
    //    strcpy(p[1].name, "viraj koli");
    //    p[1].age = 26;
    //    p[1].testmatch = 10;
    //    p[1].avgscr = 56.98;
    for (int i = 0; i < 3; i++)
    {
        printf("enter the name of player %d\n", i + 1);
        scanf("%s", &p[i].name);
        //gets(p[i].name);
        printf("enter the age of player %d\n", i + 1);
        scanf("%d", &p[i].age);
        printf("enter the no. of test match played by player %d\n", i + 1);
        scanf("%d", &p[i].testmatch);
        printf("enter the average score of player %d\n", i + 1);
        scanf("%f", &p[i].avgscr);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("name : %s\n", p[i].name);
        printf("age : %d\n", p[i].age);
        printf("no.of test matches : %d\n", p[i].testmatch);
        printf("average runs scored in total : %f\n", p[i].avgscr);
        printf("\n");
    }

    return 0;
}
