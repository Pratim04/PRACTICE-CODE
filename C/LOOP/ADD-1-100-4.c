// 1/2 + 2/3 + 3/4 +......+ 98/100 + 99/100 //

#include<stdio.h>
void main()
{
    int i,n;
    float s=0.0;
    printf("Enter a value: ");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        s=s+i/((float)i+1);
    }
    printf("The sum is %f",s);
}