#include<stdio.h>
int main()
{   
    int x,i,j,y,sum=0;
    printf("ENTER INITIAL LIMIT: ");
    scanf("%d",&y);
    printf("ENTER END LIMIT: ");
    scanf("%d",&x);
    printf("PERFECT NUMBERS ARE: ");

    for ( i = y; i <= x; i++)
    {   
        sum=0;
        for ( j = 1; j < i; j++)
       {
         if (i%j==0)
         {   
            sum=sum+j;
         }
       }
       if(sum==i)
       {
         printf("%d ",sum);
       }
              
    }
    return 0;
}