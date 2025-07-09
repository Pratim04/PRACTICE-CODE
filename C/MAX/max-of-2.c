#include<stdio.h>
void main()
{
    int a,b;
    printf("Value of a,b: ");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        printf("max is %d",a);
    }
    else
    {
        printf("max is %d",b);
    }
}