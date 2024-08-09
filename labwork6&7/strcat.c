#include <stdio.h>
#include <string.h>
int main()
{
    char str1[] = "Ramayan ";
    char str2[] = "Prasad ";
    char str3[] = "Mishra";
    int a = strlen(str1) + strlen(str2) + strlen(str3);
    int b = strlen(str1);
    int c = strlen(str1) + strlen(str2);
    char str[a];
    // printf("%d\n", b);
    // printf("%d\n", c);
    // printf("%d\n", a);
    for (int i = 0; i <= a; i++)
    {
        if (i < b)
        {
            str[i] = str1[i];
        }
        else if (i >= b && i < c)
        {
            str[i] = str2[i - b];
        }
        else
        {
            str[i] = str3[i - c];
        }
    }
    printf("%d\n", strlen(str));
    printf("%s", str);

    return 0;
}