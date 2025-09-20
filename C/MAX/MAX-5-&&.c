#include<stdio.h>
#include<conio.h>

int main()
{   
        int a,b,c,d,e;

    printf("Enter the values of a,b,c,d,e: ");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);

    if(a>b&&a>c&&a>d&&a>e)
    {
        printf("Max is %d: ",a);
    }
    if(b>a&&b>c&&b>d&&b>e)
    {
        printf("Max is %d: ",b);
    }
    if(c>a&&c>b&&c>d&&c>e)
    {
        printf("Max is %d: ",c);
    }
    if(d>a&&d>b&&d>c&&d>e)
    {
        printf("Max is %d: ",d);
    }
    if(e>a&&e>b&&e>c&&e>d)
    {
        printf("Max is %d: ",e);
    }
    return 0;
}