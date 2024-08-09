#include <stdio.h>
int main()
{
    int sum =0;
    int sum1 =0;
    int arr[5] = {1,6,5,6,1};
    for (int i = 0; i <=4; i++)
    {
        sum = sum + arr[i];
        sum = sum*10;
    }
    for (int j = 4; j >=0; j--)
    {
        sum1 = sum1 + arr[j];
        sum1 = sum1*10; 
    }
    
    if (sum==sum1)
    {
        printf("given array is palindrome");
    }
    else printf("it is not a palindrome");
    return 0;
}
