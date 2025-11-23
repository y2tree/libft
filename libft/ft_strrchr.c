/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vasari <vasari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 21:28:01 by vasari            #+#    #+#             */
/*   Updated: 2025/11/23 23:18:12 by vasari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strrchr(const char *s, int c)
{
	const char	*str;
	size_t		count;
	size_t		i;

	str = s;
	count = ft_strlen(str);
	i = count;
	while (i > 0)
	{
		if (str[i - 1] == (char)c)
			return ((char *)&str[i - 1]);
		i--;
	}
	if (str[count] == (char)c)
		return ((char *)&str[count]);
	return (NULL);
}
