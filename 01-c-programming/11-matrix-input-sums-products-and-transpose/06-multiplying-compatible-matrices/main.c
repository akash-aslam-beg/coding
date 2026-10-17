#include <stdio.h>

int main(void) {
    int m, n, p, q, i, j, k;

    printf("Enter the number of rows for the first matrix: ");
    if (scanf("%d", &m) != 1) return 1;
    printf("Enter the number of columns for the first matrix: ");
    if (scanf("%d", &n) != 1) return 1;

    printf("Enter the number of rows for the second matrix: ");
    if (scanf("%d", &p) != 1) return 1;
    printf("Enter the number of columns for the second matrix: ");
    if (scanf("%d", &q) != 1) return 1;

    if (m < 1 || m > 100 || n < 1 || n > 100 || p < 1 || p > 100 || q < 1 || q > 100) return 1;
    if (n != p) {
        printf("The multiplication is undefined since the number of columns in the first matrix (%d) "
               "is not equal to the number of rows in the second matrix (%d).\n", n, p);
        return 1; 
    }

    int firstMatrix[m][n], secondMatrix[p][q], resultMatrix[m][q];

    printf("Enter elements for the first matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("Mat1[%d][%d]: ", i + 1, j + 1);
            if (scanf("%d", &firstMatrix[i][j]) != 1) return 1;
        }
    }
      
    printf("Enter elements for the second matrix:\n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            printf("Mat2[%d][%d]: ", i + 1, j + 1);
            if (scanf("%d", &secondMatrix[i][j]) != 1) return 1;
        }
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            resultMatrix[i][j] = 0;
            for (k = 0; k < n; k++) {
                resultMatrix[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }

    printf("Resultant matrix after multiplication:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            printf("%d ", resultMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
