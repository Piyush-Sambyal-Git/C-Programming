#include <stdio.h>
int main()
{
    int a;
    printf("Enter Your age :- ");
    scanf("%d", &a);
    if (a>=18 && a<=50)
        if (a>=18 && a<=25)
            printf("You are Qualified For Grade A");
        else 
        printf("You are Qualified For Grade B");
        
    else printf("You are Not Qualified ");
return 0;}