#include <stdio.h>
#include <stdlib.h>

int main() {
    int capacity = 10;  // Initial capacity of the array
    int size = 0;       // Current size of the array
    char *arr = malloc(capacity * sizeof(char));  // Dynamically allocate memory for the array

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;  // Exit if memory allocation fails
    }

    char ch;
    printf("Enter characters (enter 'q' to quit):\n");

    while (1) {
        // Read a character from user input
        ch = getchar();

        // Exit the loop if the user enters 'q'
        if (ch == 'q') {
            break;
        }

        // Resize the array if we exceed current capacity
        if (size >= capacity) {
            capacity *= 2;  // Double the capacity
            arr = realloc(arr, capacity * sizeof(char));  // Resize the array
            
            if (arr == NULL) {
                printf("Memory reallocation failed!\n");
                return 1;  // Exit if memory reallocation fails
            }
        }

        // Store the character in the array
        arr[size++] = ch;
    }

    // Null-terminate the string
    arr[size] = '\0';

    // Print the final string
    printf("You entered: %s\n", arr);

    // Free the allocated memory
    free(arr);

    return 0;
}
