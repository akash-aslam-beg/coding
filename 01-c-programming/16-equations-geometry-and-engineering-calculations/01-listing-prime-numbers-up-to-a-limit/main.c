#include <stdio.h>

int main(void)
{

    int count=0, flag=0;

    printf("The prime numbers from 2 to 1000 are as follows:\n\n");

    for(int i=2;i<=1000;i++)
    {
        flag=0;
        for(int j=2;j<=(i/2);j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
            flag=0;
        }
        if(flag==0)
        {
            printf("%d\t", i);
            count++;
            if(count%10==0)
                printf("\n");
        }

    }
    printf("\n");
}
