#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter the three numbers :-");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b)
        if(a>c)
        printf("Greatest number is :%d",a);
        else
        printf("Greater number is :%d",c);
    else 
        if(b>c)
        printf("Greater number is :%d",b);
        else
        printf("Greater number is :%d",c);
    return 0;
}