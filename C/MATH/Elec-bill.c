#include<stdio.h>

int main()
{
    int n;
    float s;
    
    printf ("Enter the unit of current: ");
    scanf("%d",&n);

    if (n>=0&&n<=100)
        printf ("Bill is 150");

    else if (n>=1018&n<=200)
    {
        s=150+(n-100)*2.50;
        printf ("Bill is %f",s);
    }
    else if (n>=201 && n<=300)
    {
        s=150+100*2.50+(n-200)*3; 
        printf ("Bill is %f",s);
    }
    else
    {
        s=150+100*2.50+100*3+(n-300)*4.50;
        printf ("Bill is %f",s);
    }
    return 0;
}