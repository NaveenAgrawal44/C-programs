// C program to check character is alphabet or not

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
   {
     printf("character is no alphabet");
   }
   return 0;
}
    