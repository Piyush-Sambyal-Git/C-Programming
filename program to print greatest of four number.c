#include <stdio.h>
int main()
  {
     int a,b,c,d,big;
     printf("Enter Four numbers");
     scanf("%d%d%d%d",&a,&b,&c,&d);
     big = (a>b)?((a>c)?((a>d)?a:d):(c>d)?c:d):(b>c)?((b>d)?b:d):((c>d)?c:d);
     printf("The Greatest value  is = %d\n",big);
     return 0;
 }