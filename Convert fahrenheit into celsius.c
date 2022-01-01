// C program to convert fahrenheit into celsius

#include<stdio.h>
int main()
{
   float fahrenheit,celsius;
   printf("Enter temperature in fahrenheit = ");
   scanf("%f",&fahrenheit);
   celsius=((fahrenheit-32)*5)/9;
   printf("Temperature in celsius= %.1f",celsius);
   return 0;
}