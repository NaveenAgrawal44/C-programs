// C program to multiply two floating point numbers

#include<stdio.h>

int main()
{
 float x,y,product;
 printf("Enter your first number: ");
 scanf("%f",&x);
 printf("Enter your second number: ");
 scanf("%f",&y);
 product=x*y;
 printf("Product = %.2f", product);
 return 0;
}