#include <stdio.h>

int main(void)
{

    int n;
    n=-10;

    printf("Enter a number to check whether it's postive or negative ");

    if (scanf("%d", &n) != 1) return 1;

    if(n>0) {

        printf("The number is positive\n");

    }
    else if (n == 0) { printf("The number is zero\n"); }
    else{

        printf("The number is negative\n");

    }

    return 0;

}
