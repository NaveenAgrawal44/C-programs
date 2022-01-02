// C program to print week day

#include<stdio.h>
int main()
{
   int x;
   // x is week number
   printf("Enter week number x=");
   scanf("%d",&x);
   if(x==1)
   {
     printf("Sunday");
   }
   else
   if(x==2)
   {
     printf("Monday");
   }
   else
   if(x==3)
   {
     printf("Tuesday");
   }
   else
   if(x==4)
   {
     printf("Wednesday");
   }
   else
   if(x==5)
   {
     printf("Thursday");
   }
   else
   if(x==6)
   {
     printf("Friday");
   }
   else
   if(x==7)
   {
     printf("Saturday");
   }
   else
   {
     printf("Invalid week number");
   }
   return 0;
}


