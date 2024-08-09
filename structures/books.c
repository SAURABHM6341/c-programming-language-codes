#include <stdio.h>
#include <string.h>
int main()
{
    struct books
    {
        char name[50];
        int price;
        int no_of_pages;
        
    }book1,book2,book3;
    strcpy(book1.name, "engineering mathematics");
    book1.no_of_pages = 1596;
    book1.price = 893;
    strcpy(book2.name, "enginnering physics");
    book2.price = 1200;
    book2.no_of_pages = 1899;
    strcpy(book3.name, "circuit theory");
    book3.no_of_pages = 2000;
    book3.price = 560;
    
    return 0;
}
