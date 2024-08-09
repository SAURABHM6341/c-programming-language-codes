#include <stdio.h>
int main()
{
    char str[34] = " physics is awesome, just feel it";
    str[3] = 't';
    str[12] = 65;
  int j = 0;
    while (str[j] != '\0')
    {
        printf("%c", str[j]);
        j++;
    } printf("\n");
     int k = 0;
    while (str[k] != '\0')
    {
        printf("%c", k[str]);
        k++;
    } printf("\n");
     int l = 0;
    while (str[l] != '\0')
    {
        printf("%c", *(str+l));
        l++;
    }
    // instead of printing and taking input character by character we can do it in easy way 
    //please refer to string3.c
    return 0;
}
