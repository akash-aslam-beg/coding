#include <stdio.h>
int main(void)
{
    int num,rem;
    long long rev=0;

    printf("Enter a number: ");
    if (scanf("%d",&num) != 1) return 1;

    while(num!=0){
        rem=num%10;
        rev=(rev*10)+rem;
        num=num/10;
    }

    printf("\nThe reverse of the number is:  %lld\n\n",rev);

    return 0;
}
