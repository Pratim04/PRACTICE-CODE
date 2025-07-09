#include<stdio.h>
int main()
{
    int a=5;
    int* p=&a;
    int* p2=NULL;
    printf("The value of 'a' is %d\n",a);
    printf("The address of 'a' is %x\n",p);
    printf("The inside value of 'a' is %d\n",*p);
    printf("The address of 'p' is %x\n",&p);
    printf("The address of some garbage is %x\n",p2);
    return 0;
}