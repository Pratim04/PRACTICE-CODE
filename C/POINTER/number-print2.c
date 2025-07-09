// print number by malloc

#include<stdio.h>
#include<string.h>
#include<malloc.h>

int main()
{
    int*p;
    p=(int*)malloc(sizeof(int)*10);
    printf("Enter 10 Value :\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&p[i]);
    }
    printf("Result :\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n",p[i]);
    }
    return 0;
}