#include <stdio.h>

int mini_memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char *str1;
    const unsigned char *str2;
    size_t i;

    str1 = (const unsigned char *)s1;
    str2 = (const unsigned char *)s2;
    i = 0;

    while (i < n)
    {
        if (str1[i] != str2[i])
            return (str1[i] - str2[i]);
        i++;
    }
    return 0;
}

int main()
{
    char str1[] = "hello";
    char str2[] = "heelo";
    
    printf("%d\n", mini_memcmp(str1, str2, 5));  // 0
    
    char str3[] = "abc";
    char str4[] = "abd";
    
    printf("%d\n", mini_memcmp(str3, str4, 3));  // < 0 (car 'c' < 'd')
    
    return 0;
}