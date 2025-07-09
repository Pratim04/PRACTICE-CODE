// 1/1! + 1/2! + 1/3! + 1/4! + ...... + 1/n!

#include<stdio.h>

int main()
{
    float i,n,mul=1,x,sum=0;
    printf("Enter value of n: ");
    scanf("%f",&n);
    for ( i = 1; i <=n; i++)
    {
        mul = mul*i;
        x=1/mul;
        sum =x+sum;
        
    }
    printf("%f",sum);
    return 0;
}