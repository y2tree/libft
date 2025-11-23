/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vasari <vasari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 21:26:20 by vasari            #+#    #+#             */
/*   Updated: 2025/11/23 23:19:15 by vasari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

// int	main(void)
// {
// 	char str[20] = "Hello World!";

// 	printf("Avant : %s\n", str);

// 	ft_memset(str, 'X', 5);

// 	printf("Apres : %s\n", str);

// 	char *result = ft_memset(str + 6, 'Y', 5);
// 	printf("Final : %s\n", str);

// 	return (0);
// }