#include <stdio.h>
int main ()

{
    double a,b,value ;
    char plus,minus,multiplication,subtraction;

    plus = '+';
    minus='-';
    multiplication='*';
    subtraction='/';

    printf("Enter a number ");
    if (scanf("%lf", &a) != 1) return 1;
    printf("Enter another number ");
    if (scanf("%lf", &b) != 1) return 1;

    value = a+b;
    printf("%lf %c %lf = %lf\n", a,plus,b,value);

    value = a-b;
    printf("%lf %c %lf = %lf\n", a,minus,b,value);

    value = a*b;
    printf("%lf %c %lf = %lf\n", a,multiplication,b,value);

    if (b == 0) { printf("Division by zero is undefined\n"); return 0; }
    value = a/b;
    printf("%lf %c %lf = %lf\n", a,subtraction,b,value);

    return 0;
}
