/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vasari <vasari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 13:25:06 by vasari            #+#    #+#             */
/*   Updated: 2025/11/23 23:15:39 by vasari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}

/*
int	main(void)
{
	char	str[20] = "Hello World!";

	printf("Avant : '%s'\n", str);
	ft_bzero(str, 5);
	printf("Après : '%s'\n", str + 5);  // Affiche " World!"
	// Vérifier que les 5 premiers sont bien à 0
	for (int i = 0; i < 5; i++)
		printf("str[%d] = %d\n", i, str[i]);
	return (0);
}
*/