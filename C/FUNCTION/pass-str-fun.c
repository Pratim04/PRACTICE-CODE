// passing a string by function :
#include<stdio.h>

char*name(char n[])
{
    return n;
}
int main()
{
    printf("Your name is %s",name("Pratim"));
}