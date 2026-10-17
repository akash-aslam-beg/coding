#include <stdio.h>
int main(void)
{
    int i,j,temp,X[10];
    double sum1=0,sum2=0;

    for(i=0;i<10;i++){
        printf("Enter value %d of list X: ",i+1);
        if (scanf("%d",&X[i]) != 1) return 1;
    }

    for(i=0;i<9;i++){
        for(j=0;j<(9-i);j++){
            if(X[j]>X[j+1]){
                temp=X[j];
                X[j]=X[j+1];
                X[j+1]=temp;
            }
        }
    }

    printf("\nThe smaller five values in list X is:\n");
    for(i=0;i<5;i++){
        printf("%d   ",X[i]);
        sum1+=X[i];
    }

    printf("\nThe bigger five values in list X is:\n");
    for(i=5;i<10;i++){
        printf("%d   ",X[i]);
        sum2+=X[i];
    }

    printf("\n\nMean of the smaller five values %0.3lf\n",sum1/5);
    printf("Mean of the bigger five values %0.3lf\n",sum2/5);

    return 0;

}
