#include<stdio.h>
void sum()
{
    int a,b,sum=0;
    printf("enter the numbers: ");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("sum=%d\n",sum);
}
void main()
{
    sum();
    sum();
}