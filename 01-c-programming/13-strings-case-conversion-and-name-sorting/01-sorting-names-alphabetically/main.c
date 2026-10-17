#include <stdio.h>
#include <string.h>

#define MAX_NAMES 5
#define MAX_LENGTH 50

void sortNames(char names[MAX_NAMES][MAX_LENGTH], int numNames) {
    for (int i = 0; i < numNames - 1; i++) {
        for (int j = i + 1; j < numNames; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                char temp[MAX_LENGTH];
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }
}

int main(void) {
    char names[MAX_NAMES][MAX_LENGTH];

    printf("Enter %d names, one per line:\n", MAX_NAMES);
    for (int i = 0; i < MAX_NAMES; i++) {
        if (!fgets(names[i], MAX_LENGTH, stdin)) return 1;
        
        names[i][strcspn(names[i], "\n")] = '\0';
    }

    sortNames(names, MAX_NAMES);

    printf("\nSorted Names:\n");
    for (int i = 0; i < MAX_NAMES; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}
