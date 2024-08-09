#include <stdio.h>
int main()
{
    struct struct2
    {
    int marks;
    int names[]; // we can also declare a array inside structures
    };
    
    typedef struct str
    {
    int marks;
    int names[]; 
    }tr;//now if we write tr in place of struct str it will also work but now we cannnot define student name before semi colon any more
    return 0;
}
