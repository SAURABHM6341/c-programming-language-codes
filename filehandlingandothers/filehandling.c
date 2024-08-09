#include <stdio.h>
int main()
{
     FILE*ptr = fopen("test.txt","r");
     char str[100];
     //if (fgets(str,100,ptr)!=NULL)
    if (fscanf(ptr,"%s",str)!=EOF)
        printf("%s",str);
    
    // while (fgets(str,100,ptr)!=NULL)
    // {
    //     printf("%s",str);
    // }
    // creating a file
    //FILE*ptr = fopen("test1.txt","w");
    //writing i afile line by line
    //char str1[] = "i am a btech student";
    
    //fputs(str1,ptr);
    //fputs and fprintf can also be used
//     while(fscanf(ptr, "%s", str)!=EOF)
// {
//     printf("%s",str);
// }
// FILE*ptr = fopen("test2.txt","w");
//     fprintf(ptr,"saurabh mishra");

    fclose(ptr);
    return 0;
}