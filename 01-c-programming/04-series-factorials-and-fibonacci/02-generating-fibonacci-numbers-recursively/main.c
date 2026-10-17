#include<stdio.h>
int fibonacci(int n)
{
    if(n==1 || n==0) return n;

    else return(fibonacci(n-1)+fibonacci(n-2));
}

int main(void)
{
   int i,p;
   printf("Enter for how many numbers you want the fibonacci series:\n");
   if (scanf("%d",&p) != 1) return 1;
   if (p < 0 || p > 30) return 1;

   printf("\nThe first %d Fibonacci numbers:\n", p);
   for(i=0;i<p;i++){
    printf("%d    ",fibonacci(i));
   }

   printf("\n\n");
}
