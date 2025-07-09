#include<stdio.h>
#include<string.h>
void rev(char *name)
{
    for (int i = strlen(name); i >= 0; i--)
    {
        printf("%c",*(name + i));
    }
}
int main()
{
    char a[100];
    printf("Enter a name :");
    gets(a);
    rev(a);
    return 0;
}