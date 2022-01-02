// C program to calculate frequency

#include<stdio.h>
int main()
{   
    float c,w,f;
    printf("Enter speed: ");
    scanf("%f",&c);
    printf("Enter wavelength: ");
    scanf("%f",&w);
    f=c/w;
    printf("Frequency = %.2fHz",f);
    
    return 0;
}