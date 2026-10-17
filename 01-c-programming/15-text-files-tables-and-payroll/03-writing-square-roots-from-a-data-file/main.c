#include <stdio.h>
#include <math.h>
int main(void) {
    FILE *input = fopen("square.txt", "r");
    if (!input) return 1;
    int values[10];
    for (int i = 0; i < 10; ++i) {
        if (fscanf(input, "%d", &values[i]) != 1 || values[i] < 0) {
            fclose(input);
            return 1;
        }
    }
    fclose(input);
    FILE *output = fopen("writesquare.txt", "w");
    if (!output) return 1;
    for (int i = 0; i < 10; ++i) {
        double root = sqrt(values[i]);
        printf("sqrt(%d) = %.2f\n", values[i], root);
        fprintf(output, "%.2f\t", root);
    }
    fclose(output);
    return 0;
}
