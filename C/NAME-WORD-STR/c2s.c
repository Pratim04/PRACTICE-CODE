#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char a[10];
    printf("Enter a name : ");
    for ( i = 0; i < 6; i++)
    {
        scanf("%c",&a[i]);
    }
    i++;
    a[i]='\0';
    printf("%s",a);
    return 0;
}