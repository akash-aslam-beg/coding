#include <stdio.h>

int fact(int number)
{
    if(number==1 || number==0){
        return 1;
    }

    else{
        return (number*fact(number-1));
    }

}

int main(void)
{
    int a;

    printf("Enter the number you want to know the factorial: ");
    if (scanf("%d",&a) != 1) return 1;

    if (a < 0 || a > 12) { printf("Enter an integer from 0 to 12\n"); return 1; }
    printf("\nThe factorial of %d is %d\n",a,fact(a));
}
