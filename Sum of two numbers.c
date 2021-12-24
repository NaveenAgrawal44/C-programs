// C program to enter two numbers and find their sum

#include<stdio.h>
int main()
{
   float x,y,sum;
   printf("Enter the first number=");
   scanf("%f",&x);
   printf("Enter the second number=");
   scanf("%f",&y);
   sum=x+y;
   printf("Sum = %.2f",sum);
   return 0;
}