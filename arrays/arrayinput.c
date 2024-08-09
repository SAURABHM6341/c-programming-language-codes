#include <stdio.h>
int main()
{
int sum = 0;
int arr[8] = {56,85,78,36,21,96,58,14};
for (int i = 0; i <= 7; i++)
{
    sum=sum+arr[i];
}
printf("%d", sum);


    return 0;
}