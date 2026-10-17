#include<stdio.h>
void fibonacci(int n)
{
    if (n == 0) { printf("No terms\n"); return; }
    int i,array[n];
    array[0]=0;
    if (n > 1) array[1]=1;

    for(i=2;i<n;i++){
        array[i]=array[i-1]+array[i-2];
    }
    printf("\nThe first %d Fibonacci numbers:\n", n);
    for(i=0;i<n;i++){
        printf("%d   ",array[i]);
    }
}

int main(void)
{
   int p;
   printf("Enter for how many numbers you want the fibonacci series:\n");
   if (scanf("%d",&p) != 1) return 1;

   if (p < 0 || p > 46) return 1;
   fibonacci(p);
}
