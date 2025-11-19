#include <stdio.h>

int main()
{
    char str[] = "test";
    int c1 = 't';
    int c2 = 256 + 't';

    printf("=== Testdes casts ===\n");
    printf("c1 = %d\n", c1);
    printf("(char)c1 = %d\n", (char)c1);
    printf("(char)c2 = %d\n", (char)c2);
    printf("(unsigned char)c1 = %d\n", (unsigned char)c1);
    printf("(unsigned char)c2 = %d\n", (unsigned char)c2);

    printf("\n=== Comparaisons ===\n");
    printf("str[0] == c1 ? %s\n", (str[0] == c1) ? "OUI" : "NON");
    printf("str[0] == (char)c2 ? %s\n", (str[0] == (char)c2) ? "OUI" : "NON");
    
    return 0;
}