#include <stdio.h>
int main(void)
{
    int i,sum=0,X[10];
    float mean;

    printf("\nEnter 10 values:\n");
    for(i=0;i<10;i++){
        printf("Enter value %d: ",i+1);
        if (scanf("%d",&X[i]) != 1) return 1;
    }

    for(i=0;i<10;i++){
        sum+=X[i];
    }

    mean=sum/10.0;

    printf("\nMean of the values %f\n",mean);

    printf("\nThe values which are less than mean is:\n");
    for(i=0;i<10;i++){
        if(X[i]<mean){
           printf("%d\n",X[i]);
        }
    }

}
