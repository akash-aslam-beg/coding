#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j, temp, x[10], index = 0, diff[9], small = 0;

    printf("Enter the list of 10 numbers:\n\n");
    for (i = 0; i < 10; i++) {
        printf("%d. ", i + 1);
        if (scanf("%d", &x[i]) != 1) return 1;
    }

    for (i = 0; i < 10; i++) {
        for (j = i + 1; j < 10; j++) {
            if (x[i] > x[j]) {
                temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
        }
    }

    diff[0] = x[1] - x[0];
    small = diff[0];

    for (i = 0; i < 9; i++) {
        diff[i] = x[i + 1] - x[i];
        if (diff[i]<small) {
            small = diff[i];
            index = i;
        }
    }
    for(i=0;i<9;i++){
        printf("%d  ",diff[i]);
    }

    printf("\nThe two values with the least difference are: %d and %d\n", x[index + 1], x[index]);
}
