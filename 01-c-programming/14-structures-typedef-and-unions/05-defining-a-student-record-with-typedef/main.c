#include<stdio.h>
#include<string.h>

typedef struct student
{
    float marks;
    char opinion[100];
    int roll;
    char letter;
}std;

int main(void)
{
   
   std student;

   strcpy(student.opinion,"Example record");
   student.letter='a';
   student.roll=101;
   student.marks=46.2154;

   printf("Opinion: %s\n",student.opinion);
   printf("Roll: %d\n",student.roll);
   printf("marks: %f\n",student.marks);
   printf("letter: %c",student.letter);

}
