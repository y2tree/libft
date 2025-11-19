#include <stdio.h>
#include <string.h>

int main ()
{
    char str[]  = "abc zs lasssss ssss";
    printf("=== Test avec la VRAI strcht ===\n");

    char *result1 = strchr(str, 'l');
    if (result1)
        printf("Trouvé 'l' : %s\n", result1);
    
    char *result2 = strchr(str, 'z');
    if (result2)
        printf("Trouvé 'z : %s\n", result2);
    else
        printf("'z' pas trouvé\n");
    
    char *result3 = strchr(str, '\0');
    if (result3)
        printf(" Trouvé '\\0' a la position : %ld\n", result3 - str);
    
    return 0;
}