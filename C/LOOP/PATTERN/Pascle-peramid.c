#include<stdio.h>
int main()
{
    int i,j,k,n,a=1;
    printf("Enter a term :");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        for ( j = 1; j <= (n-i); j++)
        {
            printf(" ");
        }
        for ( k = 0; k <= i; k++)
        {   
            if (k==0 || i==0)
            {
                a = 1;
            }
            else
            {
                a = a * ( i - k + 1 ) / k;
            }
            printf("%d ",a);          
        }
        printf("\n");
    }
    return 0;
}