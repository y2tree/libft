#include <stdio.h>

int ft_strlen(const char *s)
{
    int i = 0;
    int count = 0;  // Pour débugger
    while (s[i] != '\0')
    {
        printf("i=%d, s[%d]='%c'\n", i, i, s[i]);  // Debug
        i++;
        count++;
        if (count > 10) break;  // Évite la boucle infinie
    }
    return (i);
}

int main()
{
    printf("Length: %d\n", ft_strlen("abc"));
    return 0;
}
