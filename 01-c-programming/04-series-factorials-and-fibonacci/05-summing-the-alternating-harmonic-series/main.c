#include <stdio.h>
#include <math.h>
int main(void)
{
    double sum=0;
    int i;

    for(i=1;i<=1000;i++){
        sum+=(pow(-1,(i+1)))*(1.0/i);
    }

    printf("\nThe sum of the series 1-(1/2)+(1/3)-(1/4)+......for first 1000 terms is: %lf\n\n",sum);
}
