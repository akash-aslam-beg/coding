#include <stdio.h>
int main(void)
{
    char country[]={'B','A','n','G','l','A','D','E','s','H','\0'};
    int i;

    for(i=0;i<10;i++)
        {
            if(country[i]>='A' && country[i]<='Z')
            {
                
                country[i]='a'+(country[i]-'A');

            }
        }

        printf("%s\n",country);

        return 0;

}
