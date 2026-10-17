#include <stdio.h>
int main(void)
{
    int i,n=1000;
    double sum=0.0;

    for(i=1;i<=n;i++){
        sum+=(1.0/i);
    }

    printf("\nThe sum of inverse of 1000 natural numbers is %lf\n\n",sum);

    return 0;
}
