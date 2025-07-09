#include <stdio.h>
#include <string.h>
char n[20];
int k=0;
char* reverse(char str[], int start, int end)
{
    if (start == end) 
    {
        n[k]='\0';
        return n;
    }
    else{
        printf("%c,",str[end]);
        n[k]=str[end];
        k++;
        reverse(str, start , end - 1);}
}

int main()
{
    char str[100];
    int len = 0;

    
    printf("Enter a string: ");
    scanf("%s", str); 

    len = strlen(str);
    strcpy(str,reverse(str, -1, len - 1));
    printf("Reversed string: %s\n", str);

    return 0;
}
