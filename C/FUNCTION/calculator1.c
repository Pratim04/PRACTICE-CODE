// No Parameters 
#include<stdio.h>
int add()
{
    int a,b;
    printf("Addition is %d",a+b);
}
int sub()
{   
    int a,b;
    printf("Substraction is %d",a-b);
}
int mul()
{   
    int a,b;
    printf("Multiplication is %d",a*b);
}
int div()
{   
    int a,b;
    printf("division is %d",a/b);    
}
void main ()
{
    int num1,num2,con,result;
    printf("Enter first number : ");
    scanf("%d",&num1);
    printf("Enter second number : ");
    scanf("%d",&num2);
    printf("Enter:\n1 for Addtion\n2 for Substraction\n3 for Multiplication\n4 for Division\n");
    scanf("%d",&con);

    switch (con)
    {
    case 1:
        add();
        break;
    case 2:
        sub();
        break;
    case 3:
        mul();
    case 4:
        div();
        break;
    default:
        break;
    }

}
