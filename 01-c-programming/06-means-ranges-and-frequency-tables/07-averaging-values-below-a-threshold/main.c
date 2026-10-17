#include <stdio.h>
int main(void)
{
    float x,mean,sum=0;
    int i,count=0;

    for(i=0;i<10;i++){
        printf("Enter the %dth number: ",i+1);
        if (scanf("%f",&x) != 1) return 1;

        if(x<35) {
        sum=sum+x;
        count=count+1;
        }
    }

    if (count == 0) { printf("No values below 35\n"); return 0; }
    mean=sum/count;

    printf("\nThe mean of the %d values of X below 35 is: %0.3f\n\n",count,mean);
    return 0;
}
