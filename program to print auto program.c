#include <stdio.h>
void main()
{
    auto int i=19;
   {
    auto int i=20;  
    printf("%d",i);
   }
     printf("%d",i);
}
