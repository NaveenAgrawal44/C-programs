// C program to find maximum between two numbers

#include<stdio.h>
int main()
{
   int x,y;
   printf("Enter first number x=");
   scanf("%d",&x);
   printf("Enter second number y=");
   scanf("%d",&y);
   switch(x>y)
  {
    case 1: printf("x is greater");
            break;
    case 0: printf("y is greater");
            break;
  }
    return 0;
}