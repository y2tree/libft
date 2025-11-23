/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vasari <vasari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 14:56:12 by vasari            #+#    #+#             */
/*   Updated: 2025/11/23 21:58:29 by vasari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	size_t	i;
	char	*result;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	result = malloc(len + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}

// char	altmaj(unsigned int i, char c)
// {
// 	if (i % 2 == 0)
// 		return (c - 32); // min -> maj
// 	return (c);
// }

// int	main(void)
// {
// 	char *s = "abcdef";
// 	char *res;

// 	res = ft_strmapi(s, altmaj);
// 	if (res)
// 	{
// 		printf("Test 1 : %s -> %s\n", s, res); // AbCdEf
// 		free(res);
// 	}

// 	res = ft_strmapi("", altmaj);
// 	if (res)
// 	{
// 		printf("Test 2 : \"%s\" -> \"%s\"\n", "", res);
// 		free(res);
// 	}
// 	return (0);
// }
