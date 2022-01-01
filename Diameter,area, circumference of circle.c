// C program to find the diameter, circumference and area of circles

#include<stdio.h>
#define pi 3.14
int main()
{
   float rad, diameter, circumference,area;
   printf("Enter radius of circle: ");
   scanf("%f",&rad);
   diameter=2*rad;
   circumference=2*pi*rad;
   area=pi*rad*rad;
   printf("Diameter of circle = %.2f\n",diameter);
   printf("Circumference of circle = %.2f\n",circumference);
   printf("Area of circle = %.2f",area);
	  return 0;
}