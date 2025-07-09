// 1²+2²+3²+......+100² //

#include<stdio.h>
void main()
{
    int i,s=0;
    for ( i = 1; i <= 100; i++)
    {
        s=s+i*i;
    }
    printf("Sum is %d",s);
}
