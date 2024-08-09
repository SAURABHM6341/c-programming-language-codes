#include <stdio.h>
#include <string.h>
int main()
{
    //char str[] = "saurabh mishra";
    //char* ptr = &str[0];
    //char* ptr = str;
    //char* ptr1 = str;
   // printf("%p", ptr);
    //printf("\n%p", ptr1);
    // int i=0;
    // while (*ptr!=0)
    // {
    //     printf("%c",*ptr);
    //     ptr++;
    //     i++;
    // }
    // char* ptr  = "saurabh is a boy";// read only string it cannot be modified
    // printf("%s",ptr);
    //str[0] = 'p';
    //printf("%s", str);
    // string me ek sath puri string modify nhi ho skti h but pointers me ho skti h
    char* ptr = "saurabh";
    ptr = "physics";
    printf("%s",ptr);
    return 0;
}
