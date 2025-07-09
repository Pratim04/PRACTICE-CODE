#include <stdio.h>
void Sort(int *name)
{
    int temp;
    for (int i = 0; i < 10 ; i++)
    {
        for (int j = 0; j < 10 - i ; j++)
        {
            if (*(name + j) > *(name + j + 1))
            {
                temp = *(name + j);
                *(name + j) = *(name + j + 1);
                *(name + j + 1) = temp;
            }
        }
    }
}
int main()
{
    int name[10];
    
    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) 
    {
        scanf("%d", name + i);
    }
    Sort(name);
    printf("\nSorted numbers are:\n");
    for (int i = 0; i <10; i++) 
    {
        printf("%d ", *(name + i));
    }
    return 0;
}