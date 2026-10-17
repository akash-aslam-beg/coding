#include <stdio.h>
int main(void)
{
    int i,n;
    int sum=0;
    printf("Enter till which ");
    if (scanf("%d",&n) != 1) return 1;

    for(i=1;i<=n;i++){
        sum=sum+i;
    }
    printf("sum is %d", sum);
}
