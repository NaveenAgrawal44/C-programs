// C program to input month number and print number of days in that month

#include<stdio.h>
int main()
{
   int x;
   // x = month number
   printf("Enter month number x=");
   scanf("%d",&x);
   if(x==1)
   {
     printf("Days in january=31");
   }
   else
   if(x==2)
   {
     printf("Days in february=28 or 29");
   }
   else
   if(x==3)
   {
     printf("Days in march=31");
   }
   else
   if(x==4)
   {
     printf("Days in april=30");
   }
   else
   if(x==5)
   {
     printf("Days in may=31");
   }
   else
   if(x==6)
   {
     printf("Days in june=30");
   }
   else
   if(x==7)
   {
     printf("Days in july=31");
   }
   else
   if(x==8)
   {
     printf("Days in august=31");
   }
   else
   if(x==9)
   {
     printf("Days in september30");
   }
   else
   if(x==10)
   {
     printf("Days in october=31");
   }
   else
   if(x==11)
   {
     printf("Days in november=30");
   }
   else
   if(x==12)
   {
     printf("Days in december=31");
   }
   else
   {
     printf("Invalid month number");
   }
   return 0;
}

