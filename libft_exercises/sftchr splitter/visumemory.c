#include <stdio.h>

int main()
{
    char str[] = "abcnkdoen";

    printf("=== Contenu de la string ===\n");
    for (int i = 0; i <= 6; i++)
    {
        if (str[i] == '\0')
            printf("str[%d] = '\\0' (valeur: %d)\n", i, str[i]);
        else
            printf("str[%d] = '%c' (valeur: %d)\n", i, str[i], str[i]);
    }

    printf("\n=== Test de recherche ===\n");
    printf("Cherche-t-on 'b' ? %s\n", ('b' == str[2]) ? "OUI" : "NON");
    printf("Cherche-t-on '\\0' ? %s\n", ('\0' == str[3]) ? "OUI" : "NON");

    return 0;
}