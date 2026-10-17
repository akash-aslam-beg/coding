#include <stdio.h>
int main(void) {
    char filename[100];
    int character, a = 0, b = 0, c = 0;
    printf("Input text file: ");
    if (scanf("%99s", filename) != 1) return 1;
    FILE *input = fopen(filename, "r");
    if (!input) return 1;
    while ((character = fgetc(input)) != EOF) {
        switch (character) {
            case 'A': ++a; break;
            case 'B': ++b; break;
            case 'C': ++c; break;
        }
    }
    if (ferror(input)) { fclose(input); return 1; }
    fclose(input);
    printf("A: %d\nB: %d\nC: %d\n", a, b, c);
    return 0;
}
