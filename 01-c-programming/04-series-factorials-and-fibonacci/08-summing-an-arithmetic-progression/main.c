#include <stdio.h>
int main(void)
{
    int i, r, a, d, sum;

    printf("Enter the first number of the series(a): ");
    if (scanf("%d", &a) != 1) return 1;

    printf("Enter the last number of the series(r): ");
    if (scanf("%d", &r) != 1) return 1;

    printf("Enter the difference between each number of the series(d): ");
    if (scanf("%d", &d) != 1) return 1;
    if (d <= 0 || a > r || a < -10000 || r > 10000) return 1;

    for (i = a, sum = 0; i <= r; i = i + d)
    {
        sum = sum + i;
    }
    printf("The summation is : %d ", sum);

    return 0;
}
