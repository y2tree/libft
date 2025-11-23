/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vasari <vasari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 21:25:42 by vasari            #+#    #+#             */
/*   Updated: 2025/11/23 21:25:47 by vasari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*mini_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str = (unsigned char *)s;
	unsigned char		a;
	size_t				i;

	a = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == a)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	str[] = "hello word";
// 	char	*result;

// 	result = mini_memchr(str, 'w', 11);
// 	if (result)
// 		printf("Trouve : %s\n", result);
// 	else
// 		printf("Pas trouvé\n");
// 	return (0);
// }
