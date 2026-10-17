#include <stdio.h>

int main(void)
{
    int n, i;
    int m;

    for (n = 1; n <= 20; n++) {
        for (i = 1,m=0; i <= 10; i++) {
            m =m + n; 
            printf("%d * %d = %d\n", n, i, m);
        }
    }

    return 0;
}
