#include <stdio.h>
#include <stdlib.h>
int main()
{
    // null pointer
    int * ptr = NULL;
     printf("%d\n",ptr);
    //  printf("%p",ptr);
    //int *ptr = (int *)malloc(25 * sizeof(int));
   // int*p = ptr;//by this i have stored address of head means first allocated memory adress (due to increment in ptr )because in free memory we have to give adress of first allocated memory otherwise it will show error
   // ptr++;
//free(p);
    return 0;
}