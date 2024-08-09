#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "saurabh is not studying enough if he doesn't stop then he will led to failure in some subjects\n";
    printf("%s",str);
    puts(str);
    //we can only use puts for string in its own library not in another
    puts("you are not doing good");
    char str1[30];
    //scanf("%s", str1);
//gets(str1);
scanf("%[^\n]s", str1); //gets ka ilaaj
// scanf me space ke baad input lena band ho jayta h hence gets ka istemaal krte h
    printf("%s\n", str1);
    printf("%s\n", str1);
    puts(str1);
    return 0;
}
