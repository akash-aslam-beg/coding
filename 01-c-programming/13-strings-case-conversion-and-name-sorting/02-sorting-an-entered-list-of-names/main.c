#include <stdio.h>
#include <string.h>

#define MAX_NAME_LENGTH 50
#define MAX_NAMES 100

int compareNames(const char a[], const char b[]) {
    return strcmp(a, b);
}

int main(void) {
    int numNames;

    printf("Enter the number of names: ");
    if (scanf("%d", &numNames) != 1) return 1;

    if (numNames <= 0 || numNames > MAX_NAMES) {
        printf("Invalid number of names.\n");
        return 1;
    }

    char names[MAX_NAMES][MAX_NAME_LENGTH];
    for (int i = 0; i < numNames; i++) {
        printf("Enter name %d: ", i + 1);
        if (scanf("%49s", names[i]) != 1) return 1;
    }

    for (int i = 0; i < numNames - 1; i++) {
        for (int j = i + 1; j < numNames; j++) {
            if (compareNames(names[i], names[j]) > 0) {
                char temp[MAX_NAME_LENGTH];
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }

    printf("\nSorted Names:\n");
    for (int i = 0; i < numNames; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}
