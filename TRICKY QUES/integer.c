#include<stdio.h>
#include<stdlib.h>

int main() 
{
    int arr[10]; // Here is a integer array but we're storing a string or a name in the integer array 

    printf("Enter a name :");
    scanf("%s",&arr[0]);

    printf("%s",arr);
    return 0;
}