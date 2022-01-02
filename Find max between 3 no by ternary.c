// C program to find maximum between three numbers

#include<stdio.h>
int main()
{
   int x,y,z;
   printf("Enter first number x=");
   scanf("%d",&x);
   printf("Enter second number y=");
   scanf("%d",&y);
   printf("Enter third number z=");
   scanf("%d",&z);
   (x>y&&x>z)?printf("x is greater"):(y>x&&y>z)?printf("y is greater"):printf("z is greater");
   return 0;
}