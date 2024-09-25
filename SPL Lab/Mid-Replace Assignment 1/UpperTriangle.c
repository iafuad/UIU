#include <stdio.h>

const int MAX_SIZE = 100;

int main() {
    int N, matrix[MAX_SIZE][MAX_SIZE];

    // Input
    printf("Enter the size of the matrix (N, max %d): ", MAX_SIZE);
    scanf("%d", &N);

    if (N <= 0 || N > MAX_SIZE) {
        printf("Invalid size. Please enter a number between 1 and %d.\n", MAX_SIZE);
        return 1;
    }

    // Generate upper triangular matrix
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (j >= i) {
                matrix[i][j] = i + 1;
            } else {
                matrix[i][j] = 0;
            }
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}