// 1/2 + 1/3 + 1/4 +......+ 1/99 + 1/100 //

#include<stdio.h>
void main()
{
    int i;
    float s=0.0;
    for ( i = 1; i <= 100; i++)
    {
        s=s+1/(float)i;
    }
    printf("The sum is %f",s);
}