#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char a[500];
    int i, j, count;

    printf("Enter a String: ");
    fgets(a, sizeof(a), stdin);

    // Remove newline if present
    size_t len = strlen(a);
    if (len > 0 && a[len - 1] == '\n')
        a[len - 1] = '\0';

    for(i = 'a'; i <= 'z'; i++)
    {       
        count = 0;
        
        for (j = 0; a[j] != '\0'; j++)
        {
            if (tolower(a[j]) == i)
                count++;
        }

        if(count > 0)
            printf("%c = %d\n", i, count);
    }

    return 0;
}
