#include <stdio.h>

int main(void) {
    int numStudents;
    
    double marks;
    int roll;

    printf("Enter the number of students: ");
    if (scanf("%d", &numStudents) != 1) return 1;

    for (int i = 1; i <= numStudents; i++) {
        printf("Enter Roll number for student %d: ", i);
        if (scanf("%d", &roll) != 1) return 1;

        printf("Enter Marks for student %d: ", i);
        if (scanf("%lf", &marks) != 1) return 1;
        if (marks < 0 || marks > 100) return 1;

        if (marks >= 90 && marks <=100) {
            printf("Roll %d : Marks %.2lf , Grade A+\n", roll, marks);
        } else if (marks > 80 && marks <=90) {
            printf("Roll %d : Marks %.2lf , Grade A\n", roll, marks);
        } else if (marks >70 && marks <=80) {
            printf("Roll %d : Marks %.2lf , Grade B+\n", roll, marks);
        } else if (marks > 60 && marks <=70) {
            printf("Roll %d : Marks %.2lf , Grade B\n", roll, marks);
        } else if (marks >50 && marks <=60) {
            printf("Roll %d : Marks %.2lf , Grade C+\n", roll, marks);
        }
         else if (marks >40 && marks <=50) {
            printf("Roll %d : Marks %.2lf , Grade C\n", roll, marks);
        } else {
            printf("Roll %d : Marks %.2lf , Grade F\n", roll, marks);
        }
    }

    return 0;
}
