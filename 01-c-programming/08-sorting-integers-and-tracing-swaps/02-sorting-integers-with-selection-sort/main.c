#include <stdio.h>
int main(void) {
    int n;
    printf("Number of elements: ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 1000) return 1;
    int values[n];
    for (int i = 0; i < n; ++i)
        if (scanf("%d", &values[i]) != 1) return 1;
    for (int i = 0; i < n - 1; ++i) {
        int position = i;
        for (int j = i + 1; j < n; ++j)
            if (values[j] < values[position]) position = j;
        int temporary = values[i];
        values[i] = values[position];
        values[position] = temporary;
    }
    printf("Ascending order:");
    for (int i = 0; i < n; ++i) printf(" %d", values[i]);
    printf("\n");
    return 0;
}
