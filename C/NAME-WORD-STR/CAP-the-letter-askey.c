#include<stdio.h>
#include<string.h>
void main()
{
    int i;
    char n[100];
    printf("Enter a name: ");
    gets(n);
    for ( i = 0; i < strlen(n); i++)
    {
        if (i==0)
        {   
            n[i]=n[i]-32;
            printf("%c",n[i]);
        }
        if (n[i]==' ')
        {   
            char ch=n[i+1]-32;
            printf("%c",ch);
        }
        else
        printf("%c",n[i+1]);
        
    }
    
}