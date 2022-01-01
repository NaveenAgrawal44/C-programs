// C program to find third angle of a triangle

#include<stdio.h>
int main()
{   
   int a,b,c;
   printf("Enter first angle a= ");
   scanf("%d",&a);
   printf("Enter second angle b= ");
   scanf("%d",&b);
   c=180-(a+b);
   printf("Third angle = %d",c);
   return 0;
}