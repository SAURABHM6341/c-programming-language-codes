#include <stdio.h>
typedef struct car
{
    int speed;
    int star;
    int comfort;
    int rpm;
}car;
// void fun(car l) {
// printf("%d",l.comfort);
// return;
// }
void change(car l)
{
l.comfort = 6;
l.rpm = 1500;
l.speed = 400;
l.star = 5;

    return;
}
int main()
{car l;
change(l);
    l.comfort = 8;
l.rpm = 1504;
l.speed = 500;
l.star = 7;
change(l);
printf("%d", l.comfort);
// and value doesnt get change means function of structure work on paas by value not on pass by reference 
    return 0;
}