#include <stdio.h>
void *mini_memcpy(void *dest, const void *src, size_t n)
{
    if (!dest || !src)
        return (NULL);
    // TON CODE ICI
    // 1. Caste dest en unsigned char *
    unsigned char *ptrdest = (unsigned char *)dest;
    // 2. Caste src en const unsigned char * (avec const !)
    const unsigned char *ptrsrc = (const unsigned char *)src;
    // 3. Boucle pour copier n bytes
    for (size_t i = 0; i < n; i++)
        ptrdest[i] = ptrsrc[i];
    // 4. Return dest
    dest = ptrdest; // ici dest et ptrdest pointe vers le meme endroit
    return (dest);
}

int main()
{
    char src1[] = "Bonjour";
    char dest1[20];

    mini_memcpy(dest1, src1, 8);

    printf("test 1 = %s\n", dest1);

    int src2[3] = {100, 200, 300};
    int dest2[3];
    mini_memcpy(dest2, src2, sizeof(src2));
    printf("Test 2 : %d, %d, %d\n", dest2[0], dest2[1], dest2[2]);

    return 0;
}