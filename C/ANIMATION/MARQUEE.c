#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<windows.h>
int main()
{
	char name[]="payel is a good boy.  ";
	int i,j,a,b,k,x=5;
	long l;
    COORD c;
    system("cls");
	while(x<10)
	{
		c.X=1;
        c.Y=22;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
		for(i=0;i<200;i++)
		{
            c.X=200-i;
            c.Y=22;
            SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
			printf("%s",name);
			for(l=0;l<699;l++)                                                                                                                                                                                                                                                                                                                
			{
                c.X=0;
                c.Y=0;
                SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
			}	
		}
        c.X=1;
        c.Y=22;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
        printf("");
		for(i=1;i<=strlen(name);i++)
		{
			for(j=i;j<strlen(name);j++)
			{   
                c.X=0+k;
                c.Y=22;
                SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
				printf("%c",name[j]);
				k++;
				for(l=0;l<69;l++)
				{
					c.X=0;
                    c.Y=0;
                    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
				}
			}
			k=1;
            c.X=224-i;
            c.Y=22;
            SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
			for(b=0;b<i;b++)
			{
				printf("%c",name[b]);
			}
		}
    }
	x++;
    return 0;
}