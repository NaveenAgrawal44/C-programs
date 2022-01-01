// C program to convert length into meter and km

#include<stdio.h>
int main()
{
   float length,meter,kilometre;
   printf("Enter length in cm = ");
   scanf("%f",& length);
   meter=length/100;
   kilometre=length/1000;
   printf("Length in meter = %.2f\n",meter);
   printf("Length in kilometre = %.3f",kilometre);
	  return 0;
}