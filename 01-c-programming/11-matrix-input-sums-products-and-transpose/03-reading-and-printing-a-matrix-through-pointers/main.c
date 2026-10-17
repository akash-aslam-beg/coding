#include <stdio.h>
int readMatrix(int rows, int cols, int matrix[rows][cols]) {
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            if (scanf("%d", *(matrix + i) + j) != 1) return 0;
    return 1;
}
void displayMatrix(int rows, int cols, int matrix[rows][cols]) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j)
            printf("%d\t", *(*(matrix + i) + j));
        printf("\n");
    }
}
int main(void) {
    int matrix[3][3];
    printf("Enter nine matrix elements:\n");
    if (!readMatrix(3, 3, matrix)) return 1;
    printf("Matrix:\n");
    displayMatrix(3, 3, matrix);
    return 0;
}
