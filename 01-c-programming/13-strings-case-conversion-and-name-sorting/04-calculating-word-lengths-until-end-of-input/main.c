#include <stdio.h>

int string_length(char str[])
{
    int i=0;

    while(str[i]!='\0')
    {
        i=i+1;
    }
    return i;

}
int main(void)
{
    char country[100];
    int length;

   while(1 == scanf("%99s", country))
          {
              length = string_length(country);
              printf("%s contains %d letters\n",country,length);
          }
    return 0;
}
