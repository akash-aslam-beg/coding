#include <stdio.h>
int main(void)
{

   int i,j,range1=0,range2=0,range3=0,range4=0,range5=0;
   int count[26];
   int values[100] = {
        16, 6, 12, 4, 17, 3, 22, 10, 21, 19, 14, 15, 20, 4, 12, 7, 6, 7, 11, 4,
        20, 25, 25, 9, 23, 7, 25, 10, 15, 25, 24, 11, 1, 7, 6, 5, 21, 8, 23, 18,
        7, 25, 24, 21, 19, 0, 3, 9, 19, 24, 0, 25, 1, 12, 24, 21, 13, 22, 9, 8,
        13, 21, 24, 9, 20, 21, 2, 3, 13, 1, 24, 5, 0, 7, 6, 15, 24, 12, 6, 19,
        25, 19, 8, 11, 6, 0, 9, 11, 23, 14, 6, 22, 19, 9, 1, 16, 21, 3, 22, 25
    };

    for(i=0;i<=25;i++){
        count[i]=0;
    }

    for(i=0;i<=25;i++){
        for(j=0;j<100;j++){
            if(values[j]==i)count[i]++;
        }
    }

    for(i=0;i<=25;i++){
        if(i>=0 && i<=5)      range1+=count[i];
       else if(i>=6 && i<=10) range2+=count[i];
       else if(i>=11 && i<=15) range3+=count[i];
       else if(i>=16 && i<=20) range4+=count[i];
       else if(i>=21 && i<=25) range5+=count[i];
    }

    printf("\n\nThe frequency distribution with the specified class intervals is:\n\n");

    printf("No. of Values in class interval [0,5]   is = %d\n", range1);
    printf("No. of Values in class interval [6,10]  is = %d\n", range2);
    printf("No. of Values in class interval [11,15] is = %d\n", range3);
    printf("No. of Values in class interval [16,20] is = %d\n", range4);
    printf("No. of Values in class interval [21,25] is = %d\n", range5);

    return 0;
}
