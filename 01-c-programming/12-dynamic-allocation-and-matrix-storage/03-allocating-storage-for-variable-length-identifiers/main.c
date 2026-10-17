#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    for (int i = 0; i < 3; ++i) {
        int length;
        printf("Identifier %d length: ", i + 1);
        if (scanf("%d", &length) != 1 || length < 1 || length > 1000) return 1;
        char *identifier = malloc((length + 1) * sizeof *identifier);
        if (!identifier) return 1;
        int character;
        while ((character = getchar()) != '\n' && character != EOF) {}
        printf("Identifier: ");
        if (!fgets(identifier, length + 1, stdin) || (int)strlen(identifier) != length) {
            free(identifier);
            return 1;
        }
        printf("Identifier %d: %s\n", i + 1, identifier);
        free(identifier);
    }
    return 0;
}
