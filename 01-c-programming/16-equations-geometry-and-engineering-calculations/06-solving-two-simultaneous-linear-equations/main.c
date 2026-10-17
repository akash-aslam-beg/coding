#include <stdio.h>

int main(void) {
    double a1, b1, c1;
    double a2, b2, c2;

    printf("Enter the first equation in the format (a₁x + b₁y = c₁):\n");
    if (scanf("%lfx + %lfy = %lf", &a1, &b1, &c1) != 3) return 1;

    printf("Enter the second equation in the format (a₂x + b₂y = c₂):\n");
    if (scanf("%lfx + %lfy = %lf", &a2, &b2, &c2) != 3) return 1;

    double denominator = a1 * b2 - a2 * b1;

    if (denominator == 0) {
        printf("The given equations have no unique solution.\n");
    } else {
        
        double x = (double)(c1 * b2 - c2 * b1) / denominator;
        double y = (double)(a1 * c2 - a2 * c1) / denominator;

        printf("x = %.2lf, y = %.2lf\n", x, y);
    }

    return 0;
}
