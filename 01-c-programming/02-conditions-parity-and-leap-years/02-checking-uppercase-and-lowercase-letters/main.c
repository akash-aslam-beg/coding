#include <stdio.h>
int main ()
{
    char L;
    printf("Enter a letter ");
    if (scanf("%c", &L) != 1) return 1;

    if (L>='a' && L<='z'){
        printf("%c is lower case\n", L);
    }
     if(L>='A' && L<='Z'){
        printf("%c is upper case\n", L);
    }
    if (!(L >= 'a' && L <= 'z') && !(L >= 'A' && L <= 'Z')) printf("Not a letter\n");
    return 0;

}
