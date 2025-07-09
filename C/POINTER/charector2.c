// Take string and print in charector bt malloc

#include<stdio.h>
#include<string.h>
#include<malloc.h>

int main()
{
    char *p;
    p=(char*)malloc(10);
    printf("Enter name : ");
    gets(p);
    for ( int i = 0; i < strlen(p); i++)
    {
        printf("%c,",*(p+i));
    }
    
    return 0;
}