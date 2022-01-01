// C program to find area of equilateral triangle

#include<stdio.h>
#include<stdio.h>
int main()
{   
   float side,area;
   printf("Enter the side =");
   scanf("%f",&side);
   area=(sqrt(3)/4)*side*side;
   printf("Area of equilateral triangle = %.2f",area);
   return 0;
}