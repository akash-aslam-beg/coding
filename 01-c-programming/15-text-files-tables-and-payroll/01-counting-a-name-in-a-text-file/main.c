#include <stdio.h>
#include <string.h>
int main(void) {
    char filename[100], name[50];
    int count = 0;
    printf("Input text file: ");
    if (scanf("%99s", filename) != 1) return 1;
    FILE *input = fopen(filename, "r");
    if (!input) return 1;
    while (fscanf(input, "%49s", name) == 1)
        if (strcmp(name, "ABDUL") == 0) ++count;
    if (ferror(input)) { fclose(input); return 1; }
    fclose(input);
    printf("Occurrences of ABDUL: %d\n", count);
    return 0;
}
