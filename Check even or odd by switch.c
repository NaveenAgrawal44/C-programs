// C program to check number is even or odd

#include<stdio.h>
int main()
{ 
   int x;
   printf("Enter the number x=");
   scanf("%d",&x);
   switch(x%2)
   {
   case 1: printf("x is odd");
           break;
   case 0: printf("x is even");
           break;
   }
   return 0;
}