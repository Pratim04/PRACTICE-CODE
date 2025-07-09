#include<stdio.h>

int main()
{
    float r,h,area;
    printf("Enter the value of radius: ");
    scanf("%f",&r);
    printf("Enter the value of height: ");
    scanf("%f",&h);
    area=(r*r*22)/7;
    printf("Area of the circle is %f\nVolume of the cylnder is %f",area,area*h);
    
    return 0;
}