// C program to find volume of sphare 

#include<stdio.h>
#define PI 3.14
int main()
{
   float r,volume;
   printf("Enter the radius=");
   scanf("%f",&r);
   volume=(4.0/3.0)*(PI*r*r*r);
   printf("Volume of sphere = %.2f",volume);
   return 0;
}