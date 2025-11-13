#include <stdio.h>

void affiche_n_fois(char c, size_t n)
{
    for (size_t i = 0; i < n; i++)
    {
        printf("%c", c);
    }
    printf("\n");
}

int main()
{
    affiche_n_fois('A', 10);
    affiche_n_fois('B', 2);

    return 0;
}