#include <stdio.h>
#include <string.h>
int main()
{
    char ar[] = "saurabh bhaiya ";
    char* ptr = ar;
    ar[0] = 'n';
    printf("%s", ptr);
    return 0;
}
