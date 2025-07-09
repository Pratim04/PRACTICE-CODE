#include<stdio.h>
#include<string.h>
#include<ctype.h>

void main()
{
    char a[100],ch;
    printf("enter a name: ");
    gets(a);
    for ( int i = 0; i < strlen(a); i++)
    {
        if (i==0)
        {
            ch=a[0];
            printf("%c",toupper(ch));
        }
           

        if (a[i]==' ')
        {
            ch=a[i+1];
            printf("%c",toupper(ch));
    
        }
        else
        {
            printf("%c",a[i+1]);
        }
       

        
    }


}