#include <stdio.h>

int main(void) {
    int s = 0, c = 0;
    int x;

    label:
    
    if (scanf("%d", &x) != 1) return 1;
    c = c + 1;
    s = s + x;

    if (c < 10) {
        goto label; 
    }

    printf("%d", s);

    return 0;
}
