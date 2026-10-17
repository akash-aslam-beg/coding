#include <stdio.h>
struct Student {
    int roll;
    char name[50];
    char grade;
};

int main(void) {
    FILE *file;
    int n;
    printf("Enter the number of students: ");
    if (scanf("%d", &n) != 1) return 1;

    file = fopen("student_info.txt", "w");

    if (file == NULL) {
        printf("Error opening file. Exiting program.\n");
        return 1;
    }

    for (int i = 0; i < n; ++i) {
        struct Student student;
        printf("\nEnter information for student %d:\n", i + 1);
        printf("Roll: ");
        if (scanf("%d", &student.roll) != 1) return 1;

        printf("Name: ");
        if (scanf("%49s", student.name) != 1) return 1;

        printf("Grade: ");
        if (scanf(" %c", &student.grade) != 1) return 1; 

        fprintf(file, "%d %s %c\n", student.roll, student.name, student.grade);
    }

    fclose(file);

    printf("Student information has been successfully written to the file.\n");

    return 0;
}
