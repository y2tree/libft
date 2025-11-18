#include <stdio.h>

int main()
{
    unsigned char a = 'c';
    unsigned char b = 'b';

    if (a < b)
        printf("a est plus petit\n");
    else if (a > b)
        printf("b est plus petit\n");
    else
        printf("identique\n");
    
    int diff = a - b;
    printf("Difference : %d\n", diff);

    return 0;

    
}