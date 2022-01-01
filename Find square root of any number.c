// C program to find square root of any number

#include<stdio.h>
#include<math.h>
int main()
{   
   float x,squareroot;
   printf("Enter the number = ");
   scanf("%f",&x);
   squareroot=sqrt(x);
   printf("Square root = %.2f",squareroot);
   return 0;
}