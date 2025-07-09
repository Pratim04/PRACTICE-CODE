// function call by reference

#include<stdio.h>

int sum(int*i,int*k)
{
    return *i+*k;
}
int main()
{
    int a,b,c;
    printf("Enter two numbers :");
    scanf("%d%d",&a,&b);
    c=sum(&a,&b);
    printf("Your sum is %d",c);
}