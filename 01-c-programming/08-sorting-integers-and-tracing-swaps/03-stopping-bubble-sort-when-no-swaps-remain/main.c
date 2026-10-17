#include <stdio.h>

int main(void) {
    int n, i, temp;
    int swapped;

    printf("Enter the number of elements: ");
    if (scanf("%d", &n) != 1) return 1;

    if (n < 1 || n > 100) return 1;
    int arr[n];

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        printf("Enter the %d%s element: ", i + 1, (i == 0) ? "st" : (i == 1) ? "nd" : "th");
        if (scanf("%d", &arr[i]) != 1) return 1;
    }

    do {
        swapped = 0;

        for (i = 0; i < n - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                swapped = 1;
            }
        }
    } while (swapped);

    printf("Ascending order:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    for (i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("\nDescending order:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
