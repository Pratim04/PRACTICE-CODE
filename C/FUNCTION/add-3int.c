#include<stdio.h>
int sum(int x,int y,int z)
{
    return x+y+z;
}
int main()
{
    int a,b,c,result;
    printf("Enter 3 numbers :");
    scanf("%d%d%d",&a,&b,&c);
    result=sum(a,b,c);
    printf("Sum is %d",result);
    return 0;
}