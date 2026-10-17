#include <stdio.h>
int main(void)
{

    int array[3][3]={
                        {6,2,5},
                        {0,1,3},
                        {4,9,8}
                    };

    int *ptr;

    printf("Using *(array+i) or **(array+i)\n") ;
    printf("Address is %p value is %d\n",(void *)*(array+0),**(array+0));
    printf("Address is %p value is %d\n",(void *)*(array+1),**(array+1));
    printf("Address is %p value is %d\n\n",(void *)*(array+2),**(array+2));

    ptr=&array[0][0]; 
    printf("\nUsing ptr or *ptr\n") ;
    printf("Address is %p value is %d\n",(void *)(ptr+0),*(ptr+0));
    printf("Address is %p value is %d\n",(void *)(ptr+1),*(ptr+1));
    printf("Address is %p value is %d\n\n",(void *)(ptr+2),*(ptr+2));

}
