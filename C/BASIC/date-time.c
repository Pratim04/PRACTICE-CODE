#include<stdio.h>
#include<time.h>
#include<conio.h>
#include<windows.h>

int main()
{ 
    system("cls");
    time_t t;
    time(&t);
    printf("%s",ctime(&t));
    return 0;    
}