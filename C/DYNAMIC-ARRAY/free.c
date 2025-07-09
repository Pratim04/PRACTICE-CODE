#include <stdio.h>
#include <stdlib.h>
int main()
{
    // Use of calloc

    int *ptr, n;
    printf("Enter the array size :");
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int));
    printf("Enter the values :\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }
    printf("Result is : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ptr[i]);
    }

    // Use realloc

    printf("\nEnter the new array size :");
    scanf("%d", &n);
    ptr = (int *)realloc(ptr, n * sizeof(int));
    printf("Enter the new values :\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }
    printf("\nNew result is : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ptr[i]);
    }
    free(ptr);

    return 0;
}