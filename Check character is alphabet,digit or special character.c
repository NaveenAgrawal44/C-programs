// C program to check character is alphabet,digit or special character

#include<stdio.h>
int main()
{
   char ch;
   printf("Enter the character ch=");
   scanf("%c",&ch);
   if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z')
   {
     printf("character is alphabet");
   }
   else
   if(ch>='0'&&ch<='9')
   {
     printf("character is digit");
   }
   else
   {
     printf("character is special character");
   }
   return 0;
}


