/* 
 **
 ***
 ****
 *****/

#include<stdio.h>
void main()
{
    int n,r,i;
    printf("Enter value: ");
    scanf("%d",&n);
    for ( i = 1; i <=n; i++)
    {
        for ( r = 0; r <= i-1; r++)
        {
            printf("*");
        }
        printf("\n");
    }


/*****
  ****
  ***
  **
  */

    int x,y,z;
    printf("Enter value: ");
    scanf("%d",&x);
    for ( z = 1; z <=x; z++)
    {
        for ( y = x; y >= z; y--)
        {
            printf("*");
        }
        printf("\n");
    }


/*1
2 3
4 5 6
7 8 9 10*/

    int k,j,h,m=1;
    printf("Enter value: ");
    scanf("%d",&h);
    for ( k = 1; k < h; k++)
    {
        for ( j = 1; j < k; j++)
        {
            printf("%d\t",m++);
        }
        printf("\n");
    } 

/*1
2 2
3 3 3
4 4 4 4*/

    int o,p,q;
    printf("Enter value: ");
    scanf("%d",&o);
    for ( p = 1; p < o; p++)
    {
        for (q = 0; q < p; q++)
        {
            printf("%d\t",p);
        }
        printf("\n");
    }

/*1000
0100
0010
0001*/

    int e,f;
    printf("The pattern:\n");
    for ( e = 1; e < 5; e++)
    {
        for ( f = 1; f < 5; f++)
        {
            if (e==f)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
        printf("\n");
    }
}
