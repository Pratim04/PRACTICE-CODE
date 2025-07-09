// sum , sub , mul , div 
#include<stdio.h>

void main()
{
    float Sum(float,float);
    float mul(float,float);
    float sub(float,float);
    float div(float,float);

    float a,b,c,d,e,f;
    printf("Enter the value of a : ");
    scanf("%f",&a);
    printf("Enter the value of b : ");
    scanf("%f",&b);

    c=Sum(a,b);
    d=mul(a,b);
    e=sub(a,b);
    f=div(a,b);

    printf("Addition is %f\n",c);
    printf("multiplication is %f\n",d);
    printf("substraction is %f\n",e);
    printf("division is %f\n",f);
}
    float Sum(float a,float b)
    {
        return a + b;
    }
    float mul(float a,float b)
    {
        return a * b;
    }
    float sub(float a,float b)
    {
        return a - b;
    }
    float div(float a,float b)
    {
        return a / b;
    }