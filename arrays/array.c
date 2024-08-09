#include <stdio.h>
int main()
{
    int i;
    // printf("hello world");
    int block[6][2] = {{56, 89, 56, 23, 41, 74}, { 23, 12, 45, 25, 86, 79 }
};
for (int i = 0; i < 6; i++)
{
    for (int j = 0; j < 2; j++)
    {
        
    
    
    printf("  the %d elemtnt is %d\n", i, block[i][j]);
}}

return 0;
}