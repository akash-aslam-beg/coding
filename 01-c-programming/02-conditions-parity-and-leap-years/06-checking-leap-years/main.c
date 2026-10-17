#include <stdio.h>
int main(void)
{
    int year;
    printf("Enter a year: ");
    if (scanf("%d",&year) != 1) return 1;

    if(year%4==0){
        if(year%100==0){
            if(year%400==0)
                printf("%d is a leap year",year);
            else{
                printf("%d is not a leap year",year);
            }
        }
        else{
             printf("%d is a leap year",year);
        }
    }

    else{
         printf("%d is not a leap year",year);
    }

    return 0;
}
