#include <stdio.h>
int main(void) {
    int a, b, c;
    printf("Coefficients a, b and constant c: ");
    if (scanf("%d %d %d", &a, &b, &c) != 3) return 1;
    printf("%dx %+dy = %d\n", a, b, c);
    return 0;
}
