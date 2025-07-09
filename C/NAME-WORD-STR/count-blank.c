#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int count=0;
    printf("enter a string : ");
    gets(str);
    for (int i = 0; i < strlen(str); i++)
    {   
        if (str[i]==' ')
        {
            count++;
        }
    }
    printf("%d",count);
    
    return 0;
}