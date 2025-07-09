/* 
   ****
   *  *
   *  *
   **** 
*/

#include<stdio.h>

int main()
{
    int i,j,k,n;
    printf("Enter a term :");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        printf("*");
    }
    printf("\n");
    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; j < n; j++)
        {
            if (j==1 || j==n)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}