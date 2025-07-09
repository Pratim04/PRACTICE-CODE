#include<stdio.h>
void main()
{
    int x,y,i,sum;
    printf("ENTER THE NUMBER: ");
    scanf("%d",&x);
    for ( i = 1; i < x; i++)
    {
        if (x%i==0)
        {
            sum=sum+i;
        }
        
    }
    if (sum==x)
    {
        printf("it's a perfect number");
    }
    else
    {
        printf("it's not a perfect number");
    }
}
    