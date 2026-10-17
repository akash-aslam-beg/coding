#include <stdio.h>
#include <string.h>
typedef struct { char name[50]; int age; } Person;
int main(void) {
    Person people[10];
    char target[50];
    printf("Enter ten names and ages:\n");
    for (int i = 0; i < 10; ++i)
        if (scanf("%49s %d", people[i].name, &people[i].age) != 2) return 1;
    printf("Name to find: ");
    if (scanf("%49s", target) != 1) return 1;
    int found = 0;
    for (int i = 0; i < 10; ++i)
        if (strcmp(target, people[i].name) == 0) {
            printf("%s: %d years\n", people[i].name, people[i].age);
            found = 1;
        }
    if (!found) printf("Name not found\n");
    return 0;
}
