#include<stdio.h>
void count(int a)
{
    int c=0;
    if (a>0)
    {
        a=a/10;   
        c++;    
    }
    
}
int main()
{
    int x;
    printf("Enter a number : ");
    scanf("%d",&x);
    count(x);
    return 0;
}