#include <stdio.h>
int main(void)
{

    float min,max,Range;
    float X[10];
    int i;

    for(i=0;i<10;i++){
        printf("Enter the %dth number: ",i+1);
        if (scanf("%f",&X[i]) != 1) return 1;
    }

    max=X[0];
    min=X[0];

    for(i=1;i<10;i++){
        if(X[i]>max) max=X[i];
        if(X[i]<min) min=X[i];
    }

    Range=max-min;

    printf("\n\nThe biggest value is %0.2f\n",max);
    printf("The smallest value is %0.2f\n\n",min);
    printf("The range of the value is %0.2f\n\n",Range);

    return 0;
}
