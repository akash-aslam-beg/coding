#include <stdio.h>

int string_length(char str[])
{
    int i;
    int count=0;

    for(i=0;str[i]!='\0';i++)
    {
        count++;

    }
    return count;

}
int string_compare(char a[],char b[])
{
     int i;

     for(i=0;a[i]!='\0' && b[i]!='\0';i++)
     {
         if(a[i]<b[i])
         {
             return -1;
         }
         if(a[i]>b[i])
         {
             return 1;
         }
     }
     if(string_length(a)==string_length(b))
      {
          return 0;
      }
     if(string_length(a)<string_length(b))
      {
          return -1;
      }
      if(string_length(a)>string_length(b))
      {
          return 1;
      }
    return 0;
}

int main(void)
{
    char array1[100];
    char array2[100];
    int length1,length2,compare;

    if (scanf("%99s",array1) != 1) return 1;
    if (scanf("%99s",array2) != 1) return 1;

    length1=string_length(array1);
    length2=string_length(array2);
    printf("%s contains %d letters\n",array1,length1);
    printf("%s contains %d letters\n",array2,length2);
    compare=string_compare(array1,array2);
    
    if (compare < 0) {
        printf("%s is lexicographically smaller than %s\n", array1, array2);
    } else if (compare > 0) {
        printf("%s is lexicographically larger than %s\n", array1, array2);
    } else {
        printf("%s and %s are lexicographically equal\n", array1, array2);
    }

    return 0;

}
