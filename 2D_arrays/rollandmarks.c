#include <stdio.h>
int main()
{
    int r, p, c, m;
    printf("enter the number of students\n");
    scanf("%d", &r);
    char arrr[1][4] = {'R','P', 'C', 'M'};
    int arr[r][4];
    for (int i = 0; i <= r - 1; i++)
    {
        for (int j = 0; j <= 3; j++)
        {
            if (j == 0)
            {
                printf("enter the roll number of %d student \n", i + 1);
                scanf("%d", &arr[i][0]);
            }
            else if (j == 1)
            {
                printf("enter the obtained marks in physics \n");
                scanf("%d", &arr[i][1]);
            }
            else if (j == 2)
            {
                printf("enter the obtained marks in chemistry \n");
                scanf("%d", &arr[i][2]);
            }
            else
            {
                printf("enter the obtained marks in mathematics \n");
                scanf("%d", &arr[i][3]);
            }
        }
    }
    
    printf("%c  %c  %c  %c\n", arrr[0][0],arrr[0][1],arrr[0][2],arrr[0][3]);
    
    for (int i = 0; i <= r - 1; i++)
    {
        for (int j = 0; j <= 3; j++)
        {
            printf("%d  ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
