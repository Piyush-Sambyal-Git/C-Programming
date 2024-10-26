#include <stdio.h>
#include <math.h>
int main()
{
    int l = 44 , b = 56;
    float arear,perimter,areac,r2,r;
    arear = l * b ;
    printf("\nArea of rectangle: %f",arear);
    r2 = (arear / 3.14) ; 
    r =  sqrt(r2);
    printf("\nValue of r is : %f",r);
    perimter = 2 *3.14*r;
    printf("\nPerimeter Of circle is : %f",perimter);
    return 0;
}