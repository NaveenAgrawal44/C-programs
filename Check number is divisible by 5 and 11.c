// C program to check a number is divisible by 5 and 11

#include<stdio.h>
int main()
{
   int x;
   printf("Enter the number x=");
   scanf("%d",&x);
   if(x%5==0&&x%11==0)
   {
     printf("x is divisible by 5 and 11");
   }
   else
   {
     printf("x is not divisible by 5 and 11");
   }
   return 0;
}