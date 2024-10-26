#include <stdio.h>
int main()
 {
     int a,b,big;
     printf("Enter Two numbers");
     scanf("%d%d",&a,&b);
     big = a>b?a:b;
     printf("The Greates Value is = %d\n",big);
     return 0;
 }