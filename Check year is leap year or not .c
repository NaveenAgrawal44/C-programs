// C program to check year is leap year or not

#include<stdio.h>
int main()
{
   int year;
   printf("Enter the year = ");
   scanf("%d",&year);
   if(year%4==0)
   {
     printf("leap year");
   }
   else
   {
     printf("no leap year");
   }
   return 0;
}
