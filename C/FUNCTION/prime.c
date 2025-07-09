#include <stdio.h>
int prime(int x)
{
    if(x<=1)
    return 0;
    
    int i;
    for(i=2;i*i<=x;i++)
    {
        if(x%i==0)
        return 0;
    }
    return 1;
}
void main()
{
    int num;
    printf("Enter a value : ");
    scanf("%d",&num);
    if(prime(num))
    printf("It's a prime number");
    else
    printf("It's not a prime number");
}