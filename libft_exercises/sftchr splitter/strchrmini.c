#include <stdio.h>

char *ft_strchr(const char *s, int c)
{
    const char *str = (const char *)s;
    size_t i;

    i = 0;
    if (c == '\0')
    
    while (str[i] != '\0')
    {
        if (str[i] == (unsigned char)c)
            return (&str[i]);
        i++;
    }
}

int main()
{
    char *result = ft_strchr("hello", 'l');
    printf("Test 1 : %s\n", result);

    result = ft_strchr("hello", 'l');
    if (result)
        printf("Test 2 : Trouvé\n");
    else
        printf("Test 2 : Pas trouvé\n");
    
    result = ft_strchr("abc", 'a');
    printf("test 4 : %s\n", result);
    
    return 0;
}