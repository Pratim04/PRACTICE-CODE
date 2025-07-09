#include<stdio.h>
#include<conio.h>
void main()
{
    int a,i;
    printf("Enter a number: ");
    scanf("%d",&a);
    for ( i = 2; i < a; i++)
    {
        if (a%i==0)
        {
            printf("It's not a prime numner");
            getch();
            break;
        }
        
    }
    printf("It's a prime number");
    getch();
}