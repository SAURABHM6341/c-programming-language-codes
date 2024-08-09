#include <stdio.h>
int main()
{
    int n, a;
    printf("enter the size of array\n");
    scanf("%d", &n);
    int arr[n];
    printf("now enter the elements\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("entered array is\n");
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", arr[i]);
    }
    printf("\n");
    for (int j = 0; j < n-1; j++)
    {
        int b = 0;//it is the proof that if statement is true at any time if b=0 after if loop then it means that the array is sorted and no need to swap
        //if we remove this b value will swap in each pass which unsort the array.
        //if ypu want to remove b and want code to run perfectly put max element value of remaining array in small and initialise 'a' as -1 after 1st loop.
        int small = arr[j];
        for (int i = j + 1; i < n; i++)
        {
            if (small > arr[i])
//in selection sort we identify the smallest element and swap its place with the assumed smallest
            {
                small = arr[i];
                a = i;
                b++;
            }
        }
        if(b!=0){
        int temp = arr[j];
        arr[j] = arr[a];
        arr[a] = temp;}
        else{
        break;
    }}
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", arr[i]);
    }
//for n elements we need n-1 pass
//j is representing pass
//time complexity of worst and average case is O(n^2)
//time complexity for best case in this written code is O(n) but if we write code as mentioned in comment then ot will be O(n^2)
//for my code selection sort is stable and for sir's code unstable.
//for clearity refer to lec 11 sorting
//space complexity for all case is O(1)
    return 0;
}