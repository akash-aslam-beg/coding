#include <stdio.h>
typedef struct persons
{
    char name[50];
    int age;
}info;
int main(void)
{
    info person[10],temp;
    int i,j;

    for(i=0;i<10;i++){
        printf("Enter the name of the %dth person:\n",i+1);
        if (scanf("%49s",person[i].name) != 1) return 1;
        printf("Enter the age of the %dth person:\n",i+1);
        if (scanf("%d",&person[i].age) != 1) return 1;
    }

    for(i=0;i<10;i++){
        for(j=i+1;j<10;j++){
            if(person[i].age>person[j].age){
                temp=person[i];
                person[i]=person[j];
                person[j]=temp;
            }

        }
    }

      printf("\n\nThe records sorted by increasing age is:\n\n");
    for(i=0;i<10;i++){
        printf("Person %d >>>>>\n",i+1);
        printf("Name: %s\n",person[i].name);
        printf("age: %d",person[i].age);
        printf("\n\n");
    }
}
