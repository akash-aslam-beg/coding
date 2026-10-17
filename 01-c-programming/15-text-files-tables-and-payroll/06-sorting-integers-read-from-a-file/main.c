#include <stdio.h>
#include <string.h>

FILE *read, *write;

void arrange(int n, int x[]);

int main(void) {
    int i, n, x[10];
    char namei[100], nameo[100];

    printf("How many numbers to be sorted: ");
    if (scanf("%d", &n) != 1) return 1;
    printf("\n\nEnter the name of the data file: ");
    if (scanf("%99s", namei) != 1) return 1;
    if (n < 1 || n > 10) return 1;
    read = fopen(namei, "r");
    if (!read) return 1;

    printf("\n\nThe data to be sorted is:");
    for (i = 0; i < n; i++) {
        if (fscanf(read, "%d", &x[i]) != 1) { fclose(read); return 1; }
        printf(" %d", x[i]);
    }

    arrange(n, x);

    printf("\n\nEnter the name of the write data file: ");
    if (scanf("%99s", nameo) != 1) return 1;
    if (strcmp(namei, nameo) == 0) { fclose(read); return 1; }
    write = fopen(nameo, "w");
    if (!write) { fclose(read); return 1; }

    fprintf(write, "\n\n\nThe sorted data are:");
    for (i = 0; i < n; i++) {
        fprintf(write, " %d", x[i]);
    }

    fclose(read);
    fclose(write);
}

void arrange(int n, int x[]) {
    int i, j, d;

    for (j = 0; j < n - 1; j++)
        for (i = 0; i < n - j - 1; i++)
            if (x[i] > x[i + 1]) {
                d = x[i];
                x[i] = x[i + 1];
                x[i + 1] = d;
            }
}
