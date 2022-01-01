// C program to calculate compound interest

#include<stdio.h>
#include<math.h>
int main()
{
   float principle,time,rate,CI;
   printf("Enter principle = ");
   scanf("%f",&principle);
   printf("Enter time = ");
   scanf("%f",&time);
   printf("Enter rate = ");
   scanf("%f",&rate);
   CI=principle*(pow((1+rate/100),time));
   printf("Compound interest = %.2f",CI);
   return 0;
}