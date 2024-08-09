#include <stdio.h>
int main()
{
    char arr[] = "Hello Saurabh, How Are You?";
    int i = 0;
    while (arr[i] != '\0')
    {
        printf("%c", arr[i]);
        i++;
    }
    printf("\n");
    // we can declare over sized array also
    char arrr[50] = "saurabh is a good boy";
    int j = 0;
    while (arrr[j] != '\0')
    {
        printf("%c", arrr[j]);
        j++;
    }

    return 0;
}
