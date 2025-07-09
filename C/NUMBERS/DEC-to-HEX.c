#include<stdio.h>

int main()
{   int f,k=0,y;
    char n[30];
    printf("Enter a DECIMAL number : ");
    scanf("%d",&f);
    while (f>0)
    {
        y=f%16;
        f=f/16;
        if(y>9)
            n[k]=y+55;
        else
            n[k]=y+'0';
        k++;
    }
    n[k]='\0';
    //printf("%s",n);
    printf("Your Hex-Decimal value is : ");
    for (int i = k; i >= 0; i--)
    {
        printf("%c",n[i]);
    }
    return 0;
}