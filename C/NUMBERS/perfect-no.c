#include<stdio.h>
#include<conio.h>

void main()
{
    int p,y,sum;
    printf("PERFECT NUMBER: ");
    
    for(p=1;p<10000;p++)
    
    {    
        sum=0;
        for(y=1;y<p;y++)
        {
          if(p%y==0)
          {
           sum=sum+y;
          }
        }
    
         if(sum==p)
         {
          printf("%d ",sum);
         }
    }
         
}