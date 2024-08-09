#include <stdio.h>
int main()
{
    int arr[2][2] = {{1,0},{0,1}};
    // int arr[2][2];
    // arr[0][0] = 1;
    // arr[0][1] = 0;
    // arr[1][0] = 0;
    // arr[1][1] = 1;
    for (int i = 0; i <=1; i++)
    {
        for (int j = 0; j <=1; j++)
        {
            printf(" %d\t",arr[i][j]);
        }
        printf("\n");
        
    }
    
    return 0;
}
