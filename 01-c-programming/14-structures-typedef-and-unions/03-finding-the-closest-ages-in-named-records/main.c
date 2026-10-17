#include <stdio.h>
#include <string.h>
typedef struct persons
{
    char name[50];
    int age;
}info;
int main(void)
{
    info person[10],temp;
    int i,j,min,index=0,del,Diff[9];

    for(i=0;i<10;i++){
        printf("Enter the name of the %dth person:\n",i+1);
        if (scanf("%49s",person[i].name) != 1) return 1;
        printf("Enter the age of the %dth person:\n",i+1);
        if (scanf("%d",&person[i].age) != 1) return 1;
    }

      printf("\n\nThe input names and ages of each of the 10 persons are:\n\n");
    for(i=0;i<10;i++){
        printf("Person %d >>>>>\n",i+1);
        printf("Name: %s\n",person[i].name);
        printf("age: %d",person[i].age);
        printf("\n\n");
    }

    for(i=0;i<9;i++){
        for(j=0;j<9-i;j++){
            if(person[j].age>person[j+1].age){
                temp=person[j];
                person[j]=person[j+1];
                person[j+1]=temp;
            }
        }
    }

    Diff[0]=person[1].age-person[0].age;
    min=Diff[0];

    for(i=0;i<9;i++){
       Diff[i]=person[i+1].age-person[i].age;
       if(Diff[i]<min){
        min=Diff[i];
        index=i;
       }
    }

    printf("Among the input names the two persons with the minimum age difference is:\n");

        printf("Person 1 >>>>>\n");
        printf("Name: %s\n",person[index].name);
        printf("age: %d\n",person[index].age);

        printf("\nPerson 2 >>>>>\n");
        printf("Name: %s\n",person[index+1].name);
        printf("age: %d\n",person[index+1].age);

        del=person[index+1].age-person[index].age;

        printf("\nThe age difference is %d\n",del);

}
