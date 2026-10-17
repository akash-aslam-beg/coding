#include <stdio.h>
int main(void) {
    int values[10], target, found = -1;
    printf("Enter ten integers, then the search value:\n");
    for (int i = 0; i < 10; ++i)
        if (scanf("%d", &values[i]) != 1) return 1;
    if (scanf("%d", &target) != 1) return 1;
    for (int i = 0; i < 10; ++i) {
        if (values[i] == target) { found = i; break; }
    }
    if (found >= 0) printf("%d found at index %d\n", target, found);
    else printf("%d was not found\n", target);
    return 0;
}
