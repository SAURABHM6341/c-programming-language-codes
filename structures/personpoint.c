#include <stdio.h>
int main()
{
typedef struct person
{
int age;
float weight;
char c;
char bh[7];
}per;    
per saurabh = {18,54.7,'a',"saurabh"};
printf("%d\n", saurabh.age);
printf("%f\n", saurabh.weight);
printf("%c\n", saurabh.c);
printf("%s\n", saurabh.bh);
// saurabh.age = 18; /// initialization ka naya tarika upar h
// saurabh.weight = 52.4;
per* x = &saurabh;
int* a = &saurabh.age;
float* w = &saurabh.weight;
printf("%d\n", *a);
printf("%f\n", *w);
//(*x).weight = 22; //(*x) ki jagah ham x-> bhi likh skte h
x->age = 56;
printf("%f\n", *w);
printf("%d\n", *a);
    return 0;
}