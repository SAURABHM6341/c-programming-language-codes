#include <stdio.h>
int main()
{ 
int sum =1;
int arr[7] = {7,5,9,4,3,5,8};
for (int i = 0; i <= 6; i++)
{
    sum = sum * arr[i];
}
printf("%d", sum);


    return 0;
}