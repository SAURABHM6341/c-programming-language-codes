#include <stdio.h>
int main()
{
    /*int a=-1; //only work for positive elemnts
    int arr[7] = {1,4,158,564,4751452,958,123};
for (int i = 0; i <=6 ; i++)
{
    if (arr[i]>a)
    {
         a = arr[i];
    }


}printf("%d",a);*/
    int a;
    int arr[5] = {-1, -5, -6, -8, -452};
    for (int i = 0; i <= 4; i++)
    {
        a = arr[0];
        if (arr[i] > a)
        {
            a = arr[i];
        }
    }
    printf("%d", a);
    // ham limits.h ko include krke a ke andar arr[0] ki jgh INT_MIN i.e., - 2^32 hoti h aur wo smallest integer in compiler hota h

    return 0;
}