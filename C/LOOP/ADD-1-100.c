#include<stdio.h>
// 1 + 2 + 3 + 4 + ... + 99 + 100
void main()
{   
    int i,sum=0;
    for ( i = 0; i <=100; i++)
    {
        sum=sum+i;
    }
    printf("ADDITION IS %d",sum);
}