// Revese the string : -
#include <stdio.h>
#include <string.h>

char*rev(char str[]) 
{
    int length = strlen(str);
    int a, b;
    char hold;
    
    for (a = 0, b = length - 1; a < b; a++, b--) 
    {
        hold = str[a];
        str[a] = str[b];
        str[b] = hold;
    }
}
int main() 
{
    char str[100];
    
    printf("Please enter a string: ");
    scanf("%s",str);
    
    rev(str);
    
    printf("Reversed string is: %s\n", str);
    
    return 0;
}