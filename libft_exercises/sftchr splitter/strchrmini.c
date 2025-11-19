#include <stdio.h>

char *ft_strchr(const char *s, int c)
{
    //const char *str = (const char *)s;
    size_t i;   
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == (char)c)
            return ((char *)&s[i]);
    }
    if (s[i] == (char)c)
        return ((char *)&s[i]);
    
    return (NULL);
}

int main()
{
    char *result = ft_strchr("helslo", 'l');
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