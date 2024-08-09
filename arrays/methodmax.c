#include <stdio.h>
int main()
{
    int max, secmax;
    secmax = 0;
    max = 0;
    int arr[5] = {1, 451, 45, 7, 5698};
    for (int i = 0; i <= 4; i++)
    {
        if (max < arr[i])
        {
            secmax = max; // this method is not valid for decreasing order array element
            max = arr[i];
        }
        // for overcoming this problem write the elseif statements
        else if (secmax < arr[i]&&max!=arr[i]) //&& is used to overcome a problem i.e., if two consecutive elements of array is same then secmax amd max become equal so for this we have to do this
        
        {
            secmax = arr[i];
        }
    }
    printf("%d ", secmax);

    return 0;
}
