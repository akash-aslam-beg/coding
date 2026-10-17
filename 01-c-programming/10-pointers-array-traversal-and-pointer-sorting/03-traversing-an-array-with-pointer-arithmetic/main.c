#include <stdio.h>
int main(void)
{
    int i;
    int arr[]={5,7,8,9};
    int *ptr=arr;

    for(i=0;i<4;i++){
       printf("%d index address %p\n",i,(void *)(arr+i));
    }

    printf("\n");
    for(i=0;i<4;i++){
       printf("%d index value is: %d\n",i,*(arr+i));
    }

    printf("\n");
    for(i=0;i<4;i++){
       printf("%d index value is: %d\n",i,*(ptr+i));
    }

}
