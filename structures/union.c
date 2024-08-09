#include <stdio.h>
#include <string.h>
int main()
{
    union books
    {
        //char name[50];
        int price;
        int no_of_pages;

    } book1;//, book2, book3;
   // strcpy(book1.name, "engineering mathematics");
    book1.no_of_pages = 1596;
    book1.price = 893;
   // printf("%s\n", book1.name); // only one will be execute at once aur wo bhi last me jo likha hoga sirf whi in this case price
    printf("%d\n", book1.price);
    printf("%d\n", book1.no_of_pages);
    return 0;
}