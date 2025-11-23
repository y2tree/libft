/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vasari <vasari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 19:57:44 by vasari            #+#    #+#             */
/*   Updated: 2025/11/23 23:10:20 by vasari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (needle[0] == '\0')
		return ((char *)haystack);
	i = 0;
	while (i < len && haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			while (needle[j] != '\0' && (i + j) < len
				&& haystack[i + j] == needle[j])
				j++;
			if (needle[j] == '\0')
				return ((char *)haystack + i);
		}
		i++;
	}
	return (NULL);
}

// int main()
// {
//     printf("Test 1: '%s'\n", ft_strnstr("hello world", "wor", 15));
//     printf("Test 2: '%s'\n", ft_strnstr("hello", "xyz", 5));
//     printf("Test 3: '%s'\n", ft_strnstr("hello", "ell", 5));
//     printf("Test 4: '%s'\n", ft_strnstr("hello", "", 5));
//     return (0);
// }
// j = 0;
//         while (little[j])
// 			{
// 				if (big[i + j] != little[j])
//                 j++;
// 			}
//         i++;
//
