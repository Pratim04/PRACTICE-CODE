#include<string.h>
#include<conio.h>
#include<stdio.h>
#include<windows.h>

int main()
{   
    system("cls");
	char n[30];
	int i,j;
	long l;
    COORD c;
	c.X=5;
    c.Y=5;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
	printf("enter string:");
	gets(n);
	for(i=0;i<strlen(n);i++)
	{
		for(j=0;j<6;j++)
		{
			c.X=18+i;
            c.Y=5+j;
            SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);

			if(n[i]=='a'||n[i]=='e'||n[i]=='i'||n[i]=='o'||n[i]=='u'||n[i]=='A'||n[i]=='E'||n[i]=='I'||n[i]=='O'||n[i]=='U')
			{
				printf("%c",n[i]);
				for(l=0;l<9999;l++)
				{
					c.X=0;
                    c.Y=0;
                    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
				}
				c.X=18+i;
                c.Y=5+j;
                SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
				if(j!=5)
				printf(" ");
			}
		}
	}
    getch();
    return 0;

}