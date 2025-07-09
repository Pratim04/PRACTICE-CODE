#include <stdio.h>
#include <stdlib.h>
int main()
{
    // use malloc
    int *ptr,n;
    printf("Enter the array size :");
    scanf("%d",&n);
    ptr = (int *)malloc(n * sizeof(int));
    printf("Enter the values :\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&ptr[i]);
    }
    printf("Result is : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",ptr[i]);
    }
    return 0;
}