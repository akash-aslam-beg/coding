#include <stdio.h>
int main(void) {
    int n, even_count = 0, odd_count = 0;
    printf("Number of values: ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 1000) return 1;
    int numbers[n], even[n], odd[n];
    for (int i = 0; i < n; ++i) {
        if (scanf("%d", &numbers[i]) != 1) return 1;
        if (numbers[i] % 2 == 0) even[even_count++] = numbers[i];
        else odd[odd_count++] = numbers[i];
    }
    printf("Even values (%d):", even_count);
    for (int i = 0; i < even_count; ++i) printf(" %d", even[i]);
    printf("\nOdd values (%d):", odd_count);
    for (int i = 0; i < odd_count; ++i) printf(" %d", odd[i]);
    printf("\n");
    return 0;
}
