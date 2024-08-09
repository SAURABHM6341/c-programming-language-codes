#include <stdio.h>
#include <string.h>
int main()
{
    char str1[50];
    char str2[50];
    puts("enter the string 1");
    gets(str1);
    puts("enter the string 2");
    gets(str2);

    int size = 0;
    for (int i = 0; str1[i] != '\0' || str2[i] != '\0'; i++)
    {
        if (str1[i] == str2[i])
        {
            size++;
        }
    }
    if (size == strlen(str1) && size == strlen(str2))
    {
        printf("strings are similar\n");
    }

    else
        printf("string are not similar\n ");
    return 0;
}
