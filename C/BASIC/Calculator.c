#include<stdio.h>

int main()
{
    float a,b,s;
    int i;
    printf("Enter the first number: ");
    scanf("%f",&a);
    printf("Enter the second number: ");
    scanf("%f",&b);
    printf("...MENU...\n1 of ADDITION\n2 for SUBTRACTION\n3 for MULTIPLICATION\n4 for DIVISION\nEnter your choice :- ");

    scanf("%d",&i);
    if (i==1)
    {
        s=a+b;
    }
    else if (i==2)
    {
        s=a-b;
    }
    else if (i==3)
    {
        s=a*b;
    }
    else if (i==4)
    {
        s=a/b;
    }
    if (i!=1&&2&&3&&4)
    {
        printf("You entered wrong input");
    }
    else
    {
        printf("RESULT IS :- \n%f",s);
    }
    return 0;
}