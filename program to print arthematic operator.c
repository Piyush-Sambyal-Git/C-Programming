#include <stdio.h>
void main()
{
   int a,b,c,d;
   printf("enter the number");
   scanf("/n%d%d%d%d",&a,&b,&c,&d);
   int i=a+b+c+d;
   int j=a-b-c-d;
   int k=a*b*c*d;
   int l=a/b/c/d;

   int m=a%b%c%d;
   int x=i*j;
   int y=k-l;
 printf("%d",x+y);
}