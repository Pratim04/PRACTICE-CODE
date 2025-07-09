#include<stdio.h>
float avg(float x,float y,float z)
{
    return (x+y+z)/3;
}
void main()
{
    float a,b,c,result;
    printf("Enter 3 numbers :");
    scanf("%f%f%f",&a,&b,&c);
    result=avg(a,b,c);
    printf("Average is %f",result);
}