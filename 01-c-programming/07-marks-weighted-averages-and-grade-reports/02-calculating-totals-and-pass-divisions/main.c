#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int roll;
    float sub1;
    float sub2;
    float sub3;
    float sub4;
} record;
int main(void)
{
    printf("This program processes Degree Exam results\n");
    printf("************************************************\n\n");

    int n;
    printf("Enter the number of candidate's: ");
    if (scanf("%d",&n) != 1) return 1;

    if (n < 1 || n > 100) return 1;
    record student[n];
    float total[n], avg[n];
    int  pass=0;

    printf("\nEnter Roll and marks obtained out of 100 by the corresponding candidates in each subject:\n\n");
    for(int i=0;i<n;i++)
    {
        printf("Candidate No.%d\n", i+1);
        printf("-------------------------\n");
        printf("Roll number: ");
        if (scanf("%d",&student[i].roll) != 1) return 1;
        printf("\nMarks in subject-1:  ");
        if (scanf("%f",&student[i].sub1) != 1) return 1;
        printf("Marks in subject-2:  ");
        if (scanf("%f",&student[i].sub2) != 1) return 1;
        printf("Marks in subject-3:  ");
        if (scanf("%f",&student[i].sub3) != 1) return 1;
        printf("Marks in subject-4:  ");
        if (scanf("%f",&student[i].sub4) != 1) return 1;
        printf("\n");
    }

    for(int i=0;i<n;i++)
    {
        total[i]=student[i].sub1+student[i].sub2+student[i].sub3+student[i].sub4;
        avg[i]=total[i]/4.0;
    }

    printf("\nResults of the passsed students are as follows:");
    for(int i=0;i<n;i++)
    {
        if(student[i].sub1>=33 && student[i].sub2>=33 && student[i].sub3>=33 && student[i].sub4>=33 && avg[i]>=36)
        {
            printf("\n\nCandidate No.%d\n", i+1);
            printf("-------------------------\n");
            printf("Roll number: %d",student[i].roll);

            printf("\n\nMarks obtained in subject-1:  %.2f",student[i].sub1);
            printf("\nMarks obtained in subject-2:  %.2f",student[i].sub2);
            printf("\nMarks obtained in subject-3:  %.2f",student[i].sub3);
            printf("\nMarks obtained in subject-4:  %.2f",student[i].sub4);

            printf("\n\nTotal marks obtained: %.2f out of 400",total[i]);
            printf("\nAverage: %.2f %%",avg[i]);

            if(avg[i]<45)
                printf("\n\nResult: 3rd Division");
            else if(avg[i]>=45 && avg[i]<60)
                printf("\n\nResult: 2nd Division");
            else
                printf("\n\nResult: 1st Division");

            pass++;
        }
    }
    if(pass==0)
      printf("*** NO CANDIDATE PASSED THE EXAM ***");

    printf("\n\n");
}
