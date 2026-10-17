#include <stdio.h>

double Area(int base, int height) {

    double a;
    a=(0.5 * base * height);

    return a;
}

int main(void) {
    int base, height;
    double result;

    printf("Enter the base of the triangle: ");
    if (scanf("%d", &base) != 1) return 1;

    printf("Enter the height of the triangle: ");
    if (scanf("%d", &height) != 1) return 1;

    result=Area(base,height);

    printf("Area of the triangle is %.2f",result);

    return 0;
}
