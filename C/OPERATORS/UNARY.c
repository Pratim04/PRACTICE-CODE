#include<stdio.h>
int main()
{   
    int x = 5,a = ++x + x++ + --x ;
    //increment unary operator: 
    printf("INCREMENT :  %d  %d  %d  %d",++x,x++,++x,x++);
    
    //decrement unary operator:
    printf("\nDECREMENT :  %d  %d  %d  %d",--x,x--,--x,x--);

    //both addition:
    printf("\nBOTH : %d",a);

    return 0;
}