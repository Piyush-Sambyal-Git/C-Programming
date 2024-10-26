#include <stdio.h>
int main()
  {
     int a,b,c,big;
     printf("Enter Three numbers");
     scanf("%d%d%d",&a,&b,&c);
     big = a>b?(a>c?a:c):(b>c?b:c);
     printf("The Greatest value  is = %d\n",big);
     return 0;
 }