#include <stdio.h>
#include <ctype.h>

int main ()
{
    char c;
    printf("Enter any letter ");
    if (scanf("%c", &c) != 1) return 1;

    c = (char)tolower((unsigned char)c);
    if (!isalpha((unsigned char)c)) { printf("Not a letter\n"); return 0; }
    if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
        printf("The letter %c is Vowel", c);
    }
    else {
        printf("The letter %c is consonant", c);
    }
    return 0;
}
