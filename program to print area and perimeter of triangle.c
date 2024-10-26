#include <stdio.h>
int main()
{
  float base,height;
    printf("\nEnter the value of Base :- ");
    scanf("%f",&base);
    printf("\nEnter the value of Height :- ");
    scanf("%f",&height);
    printf("\nPerimeter of Traingle is %.2f",base*height);
    printf("\nArea of Triangle is %.2f",0.5*base*height);
    return 0;
}