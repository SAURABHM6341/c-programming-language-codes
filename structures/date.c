#include <stdio.h>
int main()
{
typedef struct date{

    int date,month,year;
}date;
date a,b;
a.date = 16;
a.month = 5;
a.year = 1857;
b.date = 3;
b.month = 12;
b.year = 1220;
if (a.date == b.date&&a.month == b.month&&a.year == b.year)
{
    printf("equal");
}
else
printf("not equal");
    return 0;  
}