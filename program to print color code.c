#include<stdio.h>
void main()
{
 char c;
 printf("enter the color code");
 scanf("%c",&c);
 switch(c) 

 {
    case 'r':
    case 'R': 
    printf("you entered color RED");
    break;
    case 'g':
    case 'G': 
    printf("you entered color GREEN");
    break;
    case 'b':
    case 'B': 
    printf("you entered color blue");
    break;
    }
}
