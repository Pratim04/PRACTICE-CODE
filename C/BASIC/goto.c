// Using goto function instead of loop for printing 10 to 0 backward
#include<stdio.h>

int main()
{
    int i=10;
    printf("Result :\t");
    prr:
    printf("%d\t",i);
    i--;
    err:
    if (i>0)
    {
        goto prr;
    }
    return 0;
}