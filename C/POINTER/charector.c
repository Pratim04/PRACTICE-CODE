// Use of malloc :
#include<stdio.h>
#include<malloc.h>

int main()
{
    char*p;
    p=(char*)malloc(10);
    printf("Enter name :");
    gets(p);
    printf("%s",p);
    return 0;
}