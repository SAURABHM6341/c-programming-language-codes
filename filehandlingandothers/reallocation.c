#include <stdio.h>
#include <stdlib.h>
int main()
{
    int*ptr = (int*)calloc(4,sizeof(int));
    printf("%p\n",ptr);
    ptr  = realloc(ptr,8*sizeof(int));
    //it will allocate memory first then after reallocation it will allocate memory at same place condition applied jagah honi chahiye agr jgh nhi h to dusri jagaah jha khali hoga what allocate krega adress se pta lgega
    printf("%p\n",ptr); 
    ptr  = realloc(ptr,8000*sizeof(int));
     printf("%p",ptr); 
    return 0;
}