#include<stdio.h>
// 2 + 4 + 6 + 8 + ... + 100 : -

void main()
{
    int i=100,sum=0;
    for ( i = 100; i >=2; i=i-2)
    {
        sum=sum+i;
    }
    printf("ADDITION IS %d",sum);
}