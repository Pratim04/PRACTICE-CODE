#include<stdio.h>
void main()
{
    int a,i,mul=1;
    printf("Enter the number: ");
    scanf("%d",&a);
    for ( i = a; i > 0 ; i--)
    {
        mul=mul*i;
    }
    printf("%d",mul);
}