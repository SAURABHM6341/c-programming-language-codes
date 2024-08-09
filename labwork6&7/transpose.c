#include <stdio.h>
int main()
{
int arr[3][4] = {{1,5,6,8}, {2,7,6,8},{7,8,9,6}};
printf("the matrix is \n");
for (int  i = 0; i < 3; i++)
{
    for (int  j = 0; j < 4; j++)
    {
        printf("%d ",arr[i][j]);
    }
    printf("\n");
}
printf("the transpose of above printed matrix is \n");
for (int  i = 0; i < 4; i++)
{
    for (int  j = 0; j < 3; j++)
    {
        printf("%d ",arr[j][i]);
    }
    printf("\n");
}


return 0;
}