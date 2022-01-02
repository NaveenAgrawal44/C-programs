// C program to calculate distance travelled and final velocity

#include<stdio.h>
int main()
{   
    float u,a,t,v,s=0;
    printf("Enter initial velocity u=");
    scanf("%f",&u);
    printf("Enter acceleration a=");
    scanf("%f",&a);
    printf("Enter time t=");
    scanf("%f",&t);
    v=u+a*t;
    s=((u*t)+0.5*a*t*t);
    printf("Final Velocity v = %.1f\n",v);
    printf("Distance travelled s = %.1f",s);
    
    return 0;
}