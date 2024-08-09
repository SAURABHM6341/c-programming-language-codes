#include <stdio.h>
int main()
{
  int a;
  printf("enter number of rows    ");
  scanf("%d", &a);
  for (int i = 1; i <= a; i++)
  { if (i%2==0)
  {
     for (int j = 1; j <= i; j++)
    {
      int v = j + 64;
      char ch = (char)v;
      printf("%c  ", v);
    }
    printf("\n");
  } else {
    for (int j = 1; j <= i; j++)
    printf("%d ",j);
  }printf("\n");
  
   
  }

  return 0;
}
