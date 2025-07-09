#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter the value of a,b,c: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if (a>c)
        {
            printf("max is %d",a);
        }
        else
        {
            printf("max is %d",c);
        }
    }
    else
    {
        if (b>c)
        {
            printf("max is %d",b);
        }
        else
        {
            printf("max is %d",c);
        }    
    }
}