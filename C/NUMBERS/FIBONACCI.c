#include<stdio.h>
int main()
{
    int a=0,b=1,i,n,result=0;
    printf("Enter the turm: ");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        printf("%d",a);
        result=a+b;
        a=b;
        b=result;
    }
    return 0;
}