// C program to check alphabet is vowel or consonat

#include<stdio.h>
int main()
{
   char ch; 
   printf("Enter the alphabet ch=");
   scanf("%c",&ch); 
   switch(ch)
   {
   case 'a':
   case 'e': 
   case 'i':
   case 'o':
   case 'u':
   case 'A':
   case 'E': 
   case 'I':
   case 'O':
   case 'U': printf("vowel");
             break;
   default: printf("consonant");
   }
   return 0;
}