#include<stdio.h>
#include<windows.h>
int main()
{
    int a,b,d,e,i;
    printf("Enter the value of first co-ordinate :");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("Enter the value of second co-ordinate :");
    scanf("%d",&d);
    scanf("%d",&e);
    system("cls");
    COORD c;
	c.X=a;
    c.Y=b;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
    printf("%c",201);
    for(i=0;i<=d;i++)
    {
        if(i<d)
        {
            COORD c;
            c.X=a+i+1;
            c.Y=b;
            SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
            printf("%c",205);
        }
        else
            printf("%c",187);
    }
	c.X=a;
    c.Y=e;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
    printf("%c",188);
    
    return 0;
}