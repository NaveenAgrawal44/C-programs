// C program to find the perimeter of rectangle

#include<stdio.h>
int main()
{
   float length,breadth,perimeter;
   printf("Enter length of rectangle: ");
   scanf("%f",&length);
   printf("Enter breadth of rectangle: ");
   scanf("%f",&breadth);
   perimeter=2*(length+breadth);
   printf("Perimeter of rectangle =  %.2f",perimeter);
	  return 0;
}