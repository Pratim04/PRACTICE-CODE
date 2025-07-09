#include <stdio.h>
int fact(int num) 
{
    int i,mul=1;
    for(i=num;i>=1;i--)
    {
        mul=mul*i;
    }
}
void main()
{
    int num, result;
    printf("Enter a number :");
    scanf("%d",&num);
    result=fact(num);
    printf("Factorial of %d is %d",num, result);
}