/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vasari <vasari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 15:35:29 by vasari            #+#    #+#             */
/*   Updated: 2025/11/21 18:12:52 by vasari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*desty;
	size_t	i;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	desty = malloc(len1 + len2 + 1);
	if (!desty)
		return (NULL);
	i = 0;
	while (i < len1)
	{
		desty[i] = s1[i];
		i++;
	}
	while (i < (len1 + len2))
	{
		desty[i] = s2[i - len1];
		i++;
	}
	desty[len1 + len2] = '\0';
	return (desty);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char *s1 = "hello";
// 	char *s2 = "world";
// 	char *result = ft_strjoin(s1, s2);
// 	printf("%s", result);
// 	return (0);
// }