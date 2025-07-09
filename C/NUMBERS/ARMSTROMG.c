#include<stdio.h>
void main()
{
    int i,x,sum,r;
    printf("Armstrong number are:\n");
    for ( i = 0; i <=1000; i++)
    {
        x=i;
        sum=0;
        while (x!=0)
        {
            r=x%10;
            sum=sum+r*r*r;
            x=x/10;
        }
        if (sum==i)
        {
            printf("%d\n",i);
        }
        
    }
    
}