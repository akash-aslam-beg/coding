#include <stdio.h>

double findMaxValue(double a,double b,double c) {
    double x = -b/(2*a);
    double maxValue = (a*x*x)+(b*x)+c;
    return maxValue;
}

int main(void) {
    double a = -2.0;
    double b = 23.0;
    double c = 57.0;

    double maxValue=findMaxValue(a,b,c);

    printf("The maximum value of the function is: %.3f\n", maxValue);

    return 0;
}
