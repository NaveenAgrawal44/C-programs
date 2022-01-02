// C program to check no is positive,negative or zero

#include<stdio.h>
int main()
{
   int x; 
   printf("Enter the number x=");
   scanf("%d",&x); 
   switch(x>0)
   {
   case 1: printf("x is positive");
           break;
   case 0: switch(x<0)
   {
   case 1: printf("x is negative");
           break;
   case 0: printf(" x is zero");
           break;
   }
   }
   return 0;
}