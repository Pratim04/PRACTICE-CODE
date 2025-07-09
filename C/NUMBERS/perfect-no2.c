#include<stdio.h>
void main()
{
    int x,y,i,sum;
    printf("ENTER THE LIMIT: ");
    scanf("%d",&x);
    printf("Perfect numbers are: ");
    for(i=1;i<=x;i++)
    {   sum=0;
        for(y=1;y<i;y++)
        {
            if(i%y==0)
            {
                sum=sum+y;
            }
        }
         if(sum==i)
         printf("%d ",sum);
    }
}