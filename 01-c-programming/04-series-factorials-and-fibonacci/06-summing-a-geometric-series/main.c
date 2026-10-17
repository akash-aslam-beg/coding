#include <stdio.h>
#include <math.h>
int main(void)
{
    int i;
    double sum=1;

    for(i=1;i<12;i++){
        sum+=pow(0.5,i);
    }
    printf("\nSum of the series is %lf",sum);
}
