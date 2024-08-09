#include <stdio.h>
int main()
{
struct abc
{
    int a;//abc is a class and a,b,c are classes
    int b;
    int c;
};
struct spabc// if you want to add something in previous one or something new then declare a new struct and then make older struct as object
{
    int d;
    struct abc f;
}vgh;
vgh.f.a = 569;//accesing abc object 
    return 0;
}