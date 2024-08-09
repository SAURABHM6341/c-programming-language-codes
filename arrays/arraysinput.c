#include <stdio.h>
int main()
{
    int arr[3];
    printf("enter the number    :    ");
    scanf("%d", &arr[1]);
    printf("enter the number    :    ");
    scanf("%d", &arr[0]);
    printf("enter the number    :    ");
    scanf("%d", &arr[2]);
    printf("%d,%d,%d", arr[2], arr[1], arr[0]);
    return 0;
}
