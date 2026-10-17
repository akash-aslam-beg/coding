#include <stdio.h>
int main(void)

{

    double a,b,sum;

    if (scanf("%lf %lf", &a,&b) != 2) return 1;

    sum = a+b;

    printf("Sum is %0.4lf\n",sum);
    printf("Sum is %lf\n",sum);

    return 0;

}
