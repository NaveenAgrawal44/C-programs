// C program to find total,average and percentage of marks of five subjects

#include<stdio.h>
int main()
{
   int hindi,eng,phy,chem,math,total;
   float average,percentage;
   printf("Enter marks of hindi = ");
   scanf("%d",&hindi);
   printf("Enter marks of eng = ");
   scanf("%d",&eng);
   printf("Enter marks of phy = ");
   scanf("%d",&phy);
   printf("Enter marks of chem = ");
   scanf("%d",&chem);
   printf("Enter marks of math = ");
   scanf("%d",&math);
   total=hindi+eng+phy+chem+math;
   average=total/5;
   percentage=(total/500.0)*100.0;
   printf("Total = %d\n",total);
   printf("Average = %.1f\n",average);
   printf("Percentage = %.1f",percentage);
   return 0;
}