#include <stdio.h>

int main()
{
    char src[10] = "hello";
    char dest[10];
    
    // Copie manuellement byte par byte
    unsigned char *ptr_src = (unsigned char *)src;
    unsigned char *ptr_dest = (unsigned char *)dest;
    
    for (int i = 0; i < 6; i++)  // 6 pour copier "hello\0"
    {
        ptr_dest[i] = ptr_src[i];  // Copie chaque byte
    }
    
    printf("dest = %s\n", dest);  // Devrait afficher "hello"
    
    return 0;
}