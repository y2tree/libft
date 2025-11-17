/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student <student@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 00:00:00 by student           #+#    #+#             */
/*   Updated: 2025/11/05 00:00:00 by student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *d = (unsigned char *)dest;
    const unsigned char *s = (const unsigned char *)src;

    for (size_t i = 0; i < n; i++)
        d[i] = s[i];
    
    return (dest);
}

/*
int main()
{
    // Test 1 : Copier une string
    char src1[] = "bonjour";
    char dest1[20];
    ft_memcpy(dest1, src1, 8);
    printf("Test 1 : %s\n", dest1);
    
    // Test 2 : Copier des int
    int src2[3] = {100, 200, 300};
    int dest2[3];
    ft_memcpy(dest2, src2, sizeof(src2));
    printf("Test 2 : %d, %d, %d\n", dest2[0], dest2[1], dest2[2]);
    
    return 0;
}
*/