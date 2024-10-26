#include <stdio.h>
#include <math.h>
int main()
{
float arl = 2109,arc,arp,d,l=60,b=40,b1;
arp = l*b;
arc = arp-arl;
d = 100*100-4*291*1;
b1=(-100+sqrt(d))/2;
printf("Width of Cross road: %.2f\n",b1);
return 0;

}