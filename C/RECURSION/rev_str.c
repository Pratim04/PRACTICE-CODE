#include <stdio.h>
#include <string.h>

// Function to reverse a string using recursion
void reverseString(char str[], int start, int end) 
{
    // Base case: if the start index is greater than or equal to the end index, stop the recursion
    if (start >= end) 
    {
        return;
    }

    // Swap characters at start and end
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;

    // Recursive call with updated indices
    reverseString(str, start + 1, end - 1);
}

int main() 
{
    char str[100];
    printf("Enter a name : ");
    gets(str);
    
    // Calculate the length of the string
    int len = strlen(str);
    
    // Call the recursive function to reverse the string
    reverseString(str, 0, len - 1);
    
    // Print the reversed string
    printf("Reversed String: %s\n", str);
    
    return 0;
}
