#include <stdio.h>
#include <string.h>
union StudentValue { int id; float marks; char name[34]; };
int main(void) {
    union StudentValue value;
    value.id = 1;
    printf("ID: %d\n", value.id);
    value.marks = 45.5f;
    printf("Marks: %.1f\n", value.marks);
    strcpy(value.name, "Alex");
    printf("Name: %s\n", value.name);
    printf("Union storage: %lu bytes\n", (unsigned long)sizeof value);
    return 0;
}
