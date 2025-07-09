#include<stdio.h>
void main()
{
    int n,x,sum,mul,r,i;
    printf("Krishnamurthy numbers are: ");
    for ( n = 1; n <= 100000 ; n++)
    {
        x=n;
        sum=0;
        while (x!=0)
        {
            mul=1;
            r=x%10;
            for ( i = r; i > 0; i--)
            {
                mul=mul*i;
            }
            sum=sum+mul;
            x=x/10;
        }
        if (sum==n)
        {
            printf("%d\t",n);    
        }
    }
    
}