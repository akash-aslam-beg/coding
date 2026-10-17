#include <stdio.h>
int main(void)
{
    int i,j,fact,sum=0;

    for(i=1;i<=10;i++){
            fact=1;
        for(j=i;j>=1;j--){
                fact=fact*j;
        }
        sum+=fact;
        printf("Factorial of %d is %d\n",i,fact);

    }
    printf("\nThe sum of factorials of 10 natural numbers is %d\n\n",sum);
}
