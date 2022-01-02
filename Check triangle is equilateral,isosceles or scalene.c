// C program to check whether a triangle is equilateral,isosceles or scalene

#include<stdio.h>
int main()
{
   int a,b,c;
   // a,b,c are sides of triangle
   printf("Enter three sides of triangle\n");
   scanf("%d%d%d",&a,&b,&c);

   if(a==b && a==c)
   {
     printf("Equilateral triangle");
   }
   else
   if(a==b || a==c)
   {
     printf("Isosceles triangle");
   }
   else 
   {
     printf("Scalene triangle");
   }
   return 0;
}
    