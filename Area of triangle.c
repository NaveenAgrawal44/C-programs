// C program to find area of triangle using heron's formula

#include<stdio.h>
#include<math.h>
int main()
{ 
   float a,b,c,s,area;
   printf("Enter the sides of triangle\n");
   scanf("%f%f%f",&a,&b,&c);
   s=(a+b+c)/2;
   area=sqrt(s*(s-a)*(s-b)*(s-c));
   printf("Area of triangle=%.2f",area);
   return 0;
}