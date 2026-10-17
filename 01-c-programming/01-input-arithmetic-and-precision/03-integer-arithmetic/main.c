#include <stdio.h>

int main ()

{

    int num1, num2 ;
    printf("Enter a number: ");
    if (scanf("%d", &num1) != 1) return 1;

    printf("Enter another number: ");
    if (scanf("%d", &num2) != 1) return 1;

    printf("%d + %d = %d\n", num1, num2, num1+num2);
    printf("%d - %d = %d\n", num1, num2, num1-num2);
    printf("%d * %d = %d\n", num1, num2, num1*num2);
    if (num2 != 0) printf("%d / %d = %d\n", num1, num2, num1/num2);
    else printf("Division by zero is undefined\n");

    return 0;

}
