/*Raju got 6 and apples from each of raghu,sheenu and akash.He wants to know how many apples in total 
without adding them.Write a program could help raju in doing this */

#include<stdio.h>
int main()
{   
    float x,total;
    printf("How many apples raju got from each of raghu,sheenu and akash: ");
    scanf("%f",&x);
    total=3*x;
    printf("Raju got total apples =  %.2f",total);
    return 0;
}