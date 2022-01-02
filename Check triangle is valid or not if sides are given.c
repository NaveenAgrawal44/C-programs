// C program to check whether a triangle is valid or not if its sides are given

#include<stdio.h>
int main()
{
   int a,b,c;
   //a,b,c are sides of triangle
   printf("Enter three sides of triangle\n");
   scanf("%d%d%d",&a,&b,&c);
   
   if((a<b+c) && (b<a+c) && (c<a+b))
   {
     printf("Triangle is valid");
   }
   else
   {
     printf("Triangle is not valid");
   }
   return 0;
}
    