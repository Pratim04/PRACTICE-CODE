// * --------> Pointer :
// Syntex : Data_type*Variable;

#include<stdio.h>

int main()
{
    int i = 10;
    int *p;
    p = &i;
    printf("%d\n",i);
    printf("%d\n",p);
    printf("%d\n",*p);
    
    *p = 200;
    printf("%d\n",*p);
    printf("%d\n",i);
    return 0;
}