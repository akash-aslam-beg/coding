#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int rows, cols;
    printf("Rows and columns: ");
    if (scanf("%d %d", &rows, &cols) != 2 || rows < 1 || rows > 100 || cols < 1 || cols > 100) return 1;
    int **matrix = calloc(rows, sizeof *matrix);
    if (!matrix) return 1;
    int complete = 1;
    for (int i = 0; i < rows; ++i) {
        matrix[i] = malloc(cols * sizeof *matrix[i]);
        if (!matrix[i]) { complete = 0; break; }
        for (int j = 0; j < cols; ++j)
            if (scanf("%d", &matrix[i][j]) != 1) { complete = 0; break; }
        if (!complete) break;
    }
    if (complete) {
        printf("Matrix:\n");
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) printf("%d ", matrix[i][j]);
            printf("\n");
        }
    }
    for (int i = 0; i < rows; ++i) free(matrix[i]);
    free(matrix);
    return complete ? 0 : 1;
}
