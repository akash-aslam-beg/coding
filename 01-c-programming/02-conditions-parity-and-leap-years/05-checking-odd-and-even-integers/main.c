#include <stdio.h>

int main(void)

{
    int n,R;

    printf("Enter a number to check whether it's odd or even ");
    if (scanf("%d", &n) != 1) return 1;
    R=n%2;

    if(R==0){
        printf("The number is even\n");
    }
    else {
        printf("The number is odd and remainder is %d\n", R);
    }
    return 0;
}
