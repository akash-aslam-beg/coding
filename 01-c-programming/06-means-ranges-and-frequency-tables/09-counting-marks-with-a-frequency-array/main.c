#include <stdio.h>
int main(void)
{
    int i,j;
    int Total_marks[40]={86, 78, 94, 68, 92, 78, 64, 62, 72, 61, 72, 66, 65, 65, 80, 72, 62, 68, 81, 62,
                        56, 68, 58, 56, 82, 70, 74, 78, 76, 84, 88, 73, 62, 66, 76, 70, 67, 65, 77, 63};
    int marks_count[101];

    for(i=0;i<101;i++){
        marks_count[i]=0;
    }
    for (i=0;i<=39;i++){
        marks_count[Total_marks[i]]++;
    }
    for (j=0;j<101;j++){
        printf("%d ", marks_count[j]);
    }
    printf("\n");

    for (i=50;i<=100;i++){
            if (marks_count[i]>0){
        printf("Marks: %d count: %d\n",i,marks_count[i]);
            }
    }
    return 0;
}
