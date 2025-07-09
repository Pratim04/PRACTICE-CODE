#include<stdio.h>
void main()
{
    float c;
    printf("Enter the centigrade value: ");
    scanf("%f",&c);
    c=(c*9/5)+32;
    printf("Fahrenheit is %f",c);
}