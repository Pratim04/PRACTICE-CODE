#include<stdio.h>

int area(int side)
{
    return side * side;
}
int main()
{
    int a,s;
    printf("Enter the side leangth : ");
    scanf("%d",&a);
    s=area(a);
    printf("Area of the square is %d",s);
}