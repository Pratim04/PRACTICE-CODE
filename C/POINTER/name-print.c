#include <stdio.h>
#include <string.h>
int name(int *x)
{
    for(int i = 0 ; i <5 ; i++)
    {
        for (int j = 0 ; j<5 ; j++)
        {
            printf("%c",*(x + i+ j));
        }
    }
}
int main() 
{
    int a[100][100];
    printf("Enter five names :");
    for(int i = 0 ; i <5 ; i++)
    {
        for (int j = 0 ; j<5 ; j++)
        {
            scanf("%c",&a[i][j]);
        }
    }
    name(*a);
    return 0;
}