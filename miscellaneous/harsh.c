#include <stdio.h>
int main(){
    char choice;
    printf("\nenter choice ");
    choice = getchar ();
    switch(choice){
        case 'r':
        printf("\n red color");
        break;
        case 'w':
        printf("\nwhite color");
        break;
        case 'b':
        printf("\nblue color");
        break;
        default:
        printf("\nerror");
        break;
    } 
    return 0;
}