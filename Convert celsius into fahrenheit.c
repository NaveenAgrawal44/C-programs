// C program to convert celsius into fahrenheit

#include<stdio.h>
int main()
{
   float celsius,fahrenheit;
   printf("Enter temperature in celsius = ");
   scanf("%f",&celsius);
   fahrenheit=((celsius*9)/5)+32;
   printf("Temperature in fahrenheit= %.1f",fahrenheit);
   return 0;
}