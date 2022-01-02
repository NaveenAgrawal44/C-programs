/* C program to find the slope of line that passes through
two pointsP,Q with coordinates(x1,y1) and (x2,y2) respectively*/

#include<stdio.h>
int main()
{   
    float x1,x2,y1,y2,slope;
    printf("Enter P-point coordinates:\n");
    scanf("%f%f",&x1,&y1);
    printf("Enter Q-point coordinates:\n");
    scanf("%f%f",&x2,&y2);
    slope=(y2-y1)/(x2-x1);
    printf("Slope = %.1f",slope);
    
    return 0;
}