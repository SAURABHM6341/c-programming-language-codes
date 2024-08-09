#include <stdio.h>
int steps(int n){
    if (n<=3)
    {
        return n;
    }
    
    int totalways = steps(n-1) + steps(n-2) + steps(n-3);
return totalways;

}
int main()
{
    int n;
    printf("enter the number of steps");
    scanf("%d",&n);
    int sum = steps(n);
    printf("%d\n ",sum);

    return 0;
}
