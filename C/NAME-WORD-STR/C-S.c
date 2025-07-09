#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char a[6];
    printf("Enter a namre :");
    for ( i = 0; i < 6;i++)
    {
        scanf("%c",&a[i]);
    }
    i=strlen(a);
    a[i]='\0';
    printf("%s",a);
    return 0;
}