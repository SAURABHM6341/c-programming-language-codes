// structures is a user defined data types
#include <stdio.h>
int main()
{
    struct employee
{
    int id;
    char performance;
    float salary;
}saurabh_mishra;
//struct employee saurabh_mishra; // is line ko baar baar likhne se bachne ke liye struct ke semicolon se phle name likh ke define kr skte ho
saurabh_mishra.id = 101116;
saurabh_mishra.performance = 'A';
saurabh_mishra.salary = 15645789.96;
printf("%d\n", saurabh_mishra.id);

struct employee raghav_pw;
printf("enter the id of raghav\n");
scanf("%d",&raghav_pw.id);
printf("id of raghav is %d",raghav_pw.id);
raghav_pw.performance = 'A';
raghav_pw.salary = 45689321.56;
    return 0;
}

