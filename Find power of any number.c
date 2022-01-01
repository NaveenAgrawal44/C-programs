// C program to find power of any number

#include<stdio.h>
#include<math.h>
int main()
{   
   int x,y,answer;
   scanf("%d%d",&x,&y);
   answer=pow(x,y);
   printf("Answer = %d",answer);
   return 0;
}