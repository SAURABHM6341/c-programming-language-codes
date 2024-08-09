#include <stdio.h>
int func(int arr[])
{
    arr[0] = 10;
    return 0;
}
int main()
{
    int a[5] = {1, 87, 98, 65, 32};
    printf("%d\n", a[0]);
    func(a);
    printf("%d", a[0]);
    return 0;
}