// C program to check no is positive,negative or zero

#include<stdio.h>
int main()
{
   int x; 
   printf("Enter the number x=");
   scanf("%d",&x); 
   (x>0)?printf("x is positive"):(x<0)?printf("x is negative"):printf("x is zero");
   return 0;
}