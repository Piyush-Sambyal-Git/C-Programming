#include <stdio.h>
int main()
{
    float r;
    printf("Enter the Radius :- ");
    scanf("%f",&r);
    printf("Area of Circle is : %.2f",r*r*3.14);
    printf("\nPerimeter of Circle is : %.2f",2*3.14*r);
}