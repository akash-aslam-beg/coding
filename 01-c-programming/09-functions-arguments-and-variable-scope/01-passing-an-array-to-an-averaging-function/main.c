#include <stdio.h>

double avg(int n,int *ptr);

int main(void)
{
    int n,j;
    printf("Enter how many numbers you want to input: ");
    if (scanf("%d",&n) != 1) return 1;

    if (n < 1 || n > 100) return 1;
    int arr[n];
    int *ptra=arr;

    for(j=0;j<n;j++){
        printf("Enter the %dth element of array: ",j+1);
        if (scanf("%d",&arr[j]) != 1) return 1;
    }

    printf("the average of the numbers in the array is %lf\n\n",avg(n,ptra));
}

double avg(int n,int *ptr)
{
    int arraysum=0,i;

    for(i=0;i<n;i++){
        arraysum=arraysum+*(ptr+i);
    }

    return ((double)arraysum/n);

}
