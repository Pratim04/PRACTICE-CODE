#include<stdio.h>
#include<string.h>
int main()
{
    char str[10];
    printf("Enter a value : ");
    gets(str);
    for (int i = 0; i < strlen(str); i++)
    {
        printf("%c",str[i]);
    }
    return 0;
}