#include<stdio.h>
int main()
{
    int x,a,b,c,d,e;
    printf("Enter the value of a,b,c,d,e: ");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    x=(a>b)?(a>c)?(a>d)?(a>e)?a:e:(d>e)?d:e:(c>d)?(c>e)?c:e:(d>e)?d:e:(b>c)?(b>d)?(b>e)?b:e:(d>e)?d:e:(c>d)?(c>e)?c:e:(d>e)?d:e;
    printf("max is = %d",x);
    return 0;
}