#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
    char a[30];
    char b[30];

    puts("Enter a string for A: ");
    gets(a);
    puts("Enter a string for B: ");
    gets(b);

    printf("%d",strcmp(a,b));
    return 0;
}