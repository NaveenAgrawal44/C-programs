// C program to compute Quotient and Reminder

#include<stdio.h>
int main()
{
   int x,y,Quotient,Reminder;
   printf("Enter your first value: ");
   scanf("%d",&x);
   printf("Enter your second value: ");
   scanf("%d",&y);
   Quotient=x/y;
   Reminder=x%y;
   printf("Quotient = %d\n",Quotient);
   printf("Reminder = %d",Reminder);
   return 0;
}