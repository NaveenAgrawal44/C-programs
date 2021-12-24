// C program to swap two numbers by bitwise operators

#include<stdio.h>
int main()
{
   int x,y;
   printf("Enter first number x=");
   scanf("%d",&x);
   printf("Enter second number y=");
   scanf("%d",&y);
   x = x^y;
   y = x^y;
   x = x^y;
   printf("x=%d\ny=%d",x,y);
   return 0;
}