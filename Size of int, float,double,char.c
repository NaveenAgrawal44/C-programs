// C program to find the size of int,float, double,char

#include<stdio.h>
int main()
{
   int x;
   float y;
   char z;
   double w;
   printf("Size of int is %zu bytes\n",sizeof(x));
   printf("Size of float is %zu bytes\n",sizeof(y));
   printf("Size of char is %zu bytes\n",sizeof(z));
   printf("Size of double is %zu bytes",sizeof(w));
   
   return 0;
}
   