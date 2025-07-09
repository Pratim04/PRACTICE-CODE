#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
	FILE *fp;
	char a[100],ch,con[100];
	printf("Enter a file name: ");
	scanf("%s",a);
	fp=fopen(a,"w");
	printf("Enter your content :\n");
    while (1)
    {
        ch=getch();
        if (ch==19)
        {
            printf("File written successfully");
            exit(1);
        }    
        else
        {
            scanf("%s",con);
        }
        fclose(fp);       
    }
}