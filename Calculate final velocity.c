// C program to calculate final velocity

#include<stdio.h>
#include<math.h>
int main()
{   
    float u,a,s,v;
    printf("Enter initial velocity u=");
    scanf("%f",&u);
    printf("Enter acceleration a=");
    scanf("%f",&a);
    printf("Enter distance s=");
    scanf("%f",&s);
    v=sqrt(pow(u,2)+2*a*s);
    printf("Final Velocity v = %.2f",v);
    
    return 0;
}