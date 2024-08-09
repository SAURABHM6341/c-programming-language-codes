#include <stdio.h>
int rewa()
{
    printf("i am from rewa the city of white tigers but unfortunately they are about to extinct the first white tiger which we have named as mohan \n");
    return 0;
}

void engl()
{
    printf("you are not from england\n");
    rewa();
}

void australia()
{
    printf("you are not from austria\n");
    engl();
}

void india()
{
    printf("you are an indian\n");
    australia();
    return;
}

int main()
{
    india();

    return 0;
}
