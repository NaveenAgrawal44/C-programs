// C program to swap two numbers by using third variable

#include<stdio.h>
int main()
{
  int x,y,z;
  printf("Enter first number x=");
  scanf("%d",&x);
  printf("Enter second number y=");
  scanf("%d",&y);
  printf("Enter third variable z=");
  scanf("%d",&z);
  z = y;
  y = x;
  x = z;
  printf("x=%d y=%d",x,y);
  
  return 0;
}