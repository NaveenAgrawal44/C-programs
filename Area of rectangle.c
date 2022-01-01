// C program to find the Area of rectangle

#include<stdio.h>
int main()
{
   float length,breadth,area;
   printf("Enter length of rectangle: ");
   scanf("%f",&length);
   printf("Enter breadth of rectangle: ");
   scanf("%f",&breadth);
   area=length*breadth;
   printf("Area of rectangle =  %.2f",area);
	  return 0;
}