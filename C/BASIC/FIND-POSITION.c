#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter the value of a,b,c:\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {   
        if (a>c)
        {
            if(b>c)
            {
                printf("%d is max\n%d is middle\n%d is small",a,b,c);
            }
            else
            {
                printf("%d is max\n%d is middle\n%d is small",a,c,b);
            }
        }
        else
        {
            printf("%d is max\n%d is middle\n%d is small",c,a,b);
        }
    }
    else
    {
        if (b>c)
        {
            if (a>c)
            {
                printf("%d is max\n%d is middle\n%d is small",b,a,c);
            }
            else
            {
                printf("%d is max\n%d is middle\n%d is small",b,c,a);
            }
            
        }
        else
        {
            printf("%d is max\n%d is middle\n%d is small",c,b,a);
        }
    }
}