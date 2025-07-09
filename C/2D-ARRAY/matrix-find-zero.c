#include <stdio.h>
#define SIZE 3

void printMatrix(int matrix[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[SIZE][SIZE];
    int zeroRows[SIZE] = {0};
    int zeroCols[SIZE] = {0};
    
    printf("Enter the elements of the 3x3 matrix (row-wise):\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("\nOriginal Matrix:\n");
    printMatrix(matrix);

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (matrix[i][j] == 0) {
                zeroRows[i] = 1; 
                zeroCols[j] = 1; 
            }
        }
    }

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (zeroRows[i] || zeroCols[j]) {
                matrix[i][j] = 0;
            }
        }
    }
    printf("\nUpdated Matrix:\n");
    printMatrix(matrix);

    return 0;
}