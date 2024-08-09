#include <stdio.h>

int sum(int a, int b); //(argument and return both)
void printstar(int n)
{
 for (int i = 0; i < n; i++)
 {
  printf("%c", '*');
 }

}
int takenumber(){
    int  i;
    printf("enter a number");
scanf("%d", &i);
return i;
}





int main()
{

    int a, b, c;
    a = 9;
    b = 6;
    //c = sum(a, b);
   // printstar(7);
  c= takenumber();
    //printf("the sum is %d\n", c);
printf("the number is %d\n", c);
        return 0;
}
int sum(int a, int b)
{
    return a + b;
}
void saurabh()
{
    int i;
    printf("enter any number\n");
    scanf("%d", &i);
    printf("The entered number is %d",i);
}
int main()
{
    saurabh();
    return 0;
}
