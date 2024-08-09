#include <stdio.h>
int main()
{
 struct employee
{
    int id;
    char performance;
    float salary;
}saurabh_mishra;

struct employee raghav_pw;
printf("enter the id of raghav\n");
scanf("%d",&raghav_pw.id);
printf("id of raghav is %d",raghav_pw.id);
raghav_pw.performance = 'A';
raghav_pw.salary = 45689321.56; 
   saurabh_mishra = raghav_pw;//everything inside raghav is now in saurabh
   printf("\n%d",saurabh_mishra.id);
    return 0;
}