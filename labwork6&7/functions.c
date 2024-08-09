#include <stdio.h>
#include <string.h>
int main()
{
    char str3[50];
   char str1[] = {"Hello "};
   char str2[] = {"I am a learner"};
   printf("the lenth of str1 and str2 is %d and %d repectively\n", strlen(str1),strlen(str2));
   printf("the return value of strcmp is %d \n",strcmp(str1,str2));
   strcat(str1,str2);
   puts(str1);
   strcpy(str1,str2);
   puts(str1);
   puts("enter str3");
   gets(str3);
   puts(str3);
return 0;
}