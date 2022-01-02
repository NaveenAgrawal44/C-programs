// C program to check a number is positive,negative or zero

#include<stdio.h>
int main()
{
   int x;
   printf("Enter the number x=");
   scanf("%d",&x);
   if(x>0)
   {
     printf("number is positive");
   }
   else
   if(x<0)
   {
     printf("number is negative");
   }
   else
   {
     printf("number is zero");
   }
     return 0;
}