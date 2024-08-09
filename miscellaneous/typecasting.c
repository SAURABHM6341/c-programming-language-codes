#include <stdio.h>
int main()
{
    // typecasting syntax
    //(type) value;
int a=45;
float b= 98/3;
printf("the value of a is %d\n", a);
printf("the value of b is %d\n", (int)b);

// kayde se line 9 me mujhe %d ki jagah %f lgana cahiye tha kyoki 
//wo ek floation variable h pr ek type ke variable ko dusre me 
//badalne ko hi typecasting khte h syntax upar likha h  
    float c = (float)67/8;
    printf(" the value of c is %f", c);
    // aur decimal me laane ke liye definng me bhi do baar float lgega aur andar print me bhi %f hi lgega 
    // % agr andar %d rha to phir integer me answer dega
    
    return 0;
}
