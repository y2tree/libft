/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vasari <vasari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 14:55:41 by vasari            #+#    #+#             */
/*   Updated: 2025/11/21 15:34:45 by vasari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	count;
	char	*dest;
	size_t	i;

	if (!s)
		return (NULL);
	count = ft_strlen(s);
	if (start >= count)
		return (malloc(1));
	dest = malloc(len + 1);
	if (!dest)
		return (NULL);
	i = 0;
	while (i < len && s[start + i] != '\0')
	{
		dest[i] = s[start + i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include "libft.h"

// int main(void)
// {
// 	char *s = "Hello 42 !";
// 	char *sub;

// 	sub = ft_substr(s, 6, 2);
// 	if (sub)
// 	{
// 		printf("Substring : %s\n", sub);
// 		free(sub);
// 	}
// 	return (0);
// }
