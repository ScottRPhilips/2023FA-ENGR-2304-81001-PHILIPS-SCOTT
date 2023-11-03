//two-d matrix with pointers traversing data with for loop

#include <stdio.h>
int main() {
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int rows = 3;
    int columns = 3;

    // Create a pointer to the first element of the matrix
    int *ptr = &matrix[0][0];

    // Initialize max to the first element of the matrix
    int max = *ptr;

    // Traverse the matrix using pointers and loops to find the highest element
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (*(ptr + i * columns + j) > max) {
                max = *(ptr + i * columns + j); // Update max if a larger element is found
            }
        }
    }

    printf("Highest element in the matrix: %d\n", max);

    return 0;}
