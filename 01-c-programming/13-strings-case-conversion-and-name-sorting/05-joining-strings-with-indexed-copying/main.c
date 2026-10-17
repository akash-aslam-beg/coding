#include <stdio.h>
int main(void)
{
    char str1[]="bangla",str2[]="desh",str3[12];
    int i,j;

    for(i=0;i<6;i++)
    {
        str3[i]=str1[i];
    }
     for(j=6,i=0;j<10;j++,i++)
    {
        str3[j]=str2[i];
    }
    str3[10]='\0';
    printf("%s",str3);

    return 0;
}
