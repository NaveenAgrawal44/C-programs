// C program to check number is even or odd

#include<stdio.h>
int main()
{
   int x;
   printf("Enter the number x=");
   scanf("%d",&x);
   if(x&1)
   { 
     printf("x is odd");
   }
   else 
   {
     printf("x is even");
   }
   return 0;
}