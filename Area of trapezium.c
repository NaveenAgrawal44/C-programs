// C program to find area of trapezium

#include<stdio.h>
int main()
{
   float a,b,h,area;
   printf("Enter the sides\n");
   scanf("%f%f",&a,&b);
   printf("Enter the height=");
   scanf("%f",&h);
   area=(a+b)*h/2;
   printf("Area of trapezium = %.2f",area);
   return 0;
}