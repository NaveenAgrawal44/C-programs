// C program to check number is even or odd

#include<stdio.h>
int main()
{
   int x;
   printf("Enter the number x=");
   scanf("%d",&x);
   (x%2==0)?printf("x is even"):printf("x is odd");
   return 0;
}