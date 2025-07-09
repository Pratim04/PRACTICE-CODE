#include<stdio.h>

int main()
{
    int a[10],i,j,k,hold=0,l;
    printf("Enter 10 numbers :\n");
    for ( l = 0; l < 10; l++)
    {
        scanf("%d",&a[l]);
    }
    for ( i = 0; i < 10; i++)
    {
        for ( j = 0; j < 10; j++)
        {
            if (a[i]<a[j])
            {
                hold=a[i];
                a[i]=a[j];
                a[j]=hold;
            }
        }
    }
    printf("Sort is :\n");
    for (k = 0; k < 10; k++)
    {
        printf("%d\n",a[k]);
    }
    return 0;
}