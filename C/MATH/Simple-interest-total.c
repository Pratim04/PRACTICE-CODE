#include<stdio.h>

int main()
{
    float p,r,y,si;
    printf("Enter the principal value: ");
    scanf("%f",&p);
    printf("Enter the interest rate value: ");
    scanf("%f",&r);
    printf("Enter the time: ");
    scanf("%f",&y);
    printf("simple interest is %f",(p*r*y)/100);
    si=((p*r*y)/100);
    printf("\nTotal interest is %f",si+p);
    return 0;
}