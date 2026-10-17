#include <stdio.h>

int main ()
{
    double n;
    printf("Enter a number ");
    if (scanf("%lf", &n) != 1) return 1;

    if (n>=1 && n<=10){
        printf("Within [1, 10]\n");
    }
    else {
        printf("Outside [1, 10]\n");
    }
    return 0;
}
