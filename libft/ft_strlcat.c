/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vasari <vasari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 21:27:27 by vasari            #+#    #+#             */
/*   Updated: 2025/11/24 01:20:38 by vasari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	dispo;
	size_t	i;

	len = ft_strlen(dst);
	if (len >= size)
		return (len + ft_strlen(src));
	dispo = size - len - 1;
	i = 0;
	while (i < dispo && src[i] != '\0')
	{
		dst[len + i] = src[i];
		i++;
	}
	dst[len + i] = '\0';
	return (len + ft_strlen(src));
}

// int main()
// {
//     char buffer[20] = "Hello";
//     printf("Result: %zu\n", ft_strlcat(buffer, " World", 20));
//     printf("Buffer: %s\n", buffer);
//     return 0;
// }
