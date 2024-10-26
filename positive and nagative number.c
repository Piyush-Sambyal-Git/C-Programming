#include <stdio.h>

int main()
{
    int a;
    printf("Enter the number :- ");
    scanf("%d", &a);
    if(a!=0)
        if(a>0)
        printf("%d is a postive number", a);
        else 
        printf("%d is a negative number", a);
    else
    printf("Number is zero");
    return 0;
}