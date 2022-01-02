// C program to check character is uppercase or lowercase

#include<stdio.h>
int main()
{
   char ch;
   printf("Enter the character ch=");
   scanf("%c",&ch);
   if(ch>='A'&&ch<='Z')
   {
     printf("character is uppercase");
   }
   else
   {
     printf("character is lowercase");
   }
   return 0;
}


