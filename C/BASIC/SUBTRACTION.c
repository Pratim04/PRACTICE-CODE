#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter value of a,b\n");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        printf("Subtraction is %d",a-b);
    }
    else
    {
        printf("Subtraction is %d",b-a);
    }
}