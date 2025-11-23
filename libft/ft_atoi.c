/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vasari <vasari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 14:56:41 by vasari            #+#    #+#             */
/*   Updated: 2025/11/23 23:07:18 by vasari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int	ft_atoi(const char *nptr)
{
	unsigned int	i;
	int				result;
	int				sign;

	sign = 1;
	i = 0;
	result = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == '+')
		i++;
	else if (nptr[i] == '-')
	{
		sign = sign * -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	return (result * sign);
}

// #include <stdio.h>

// // Ton ft_atoi ici

// int main()
// {
//     printf("Test 1: %d\n", ft_atoi("123"));
//     printf("Test 2: %d\n", ft_atoi("-42"));
//     printf("Test 3: %d\n", ft_atoi("   +17"));
//     printf("Test 4: %d\n", ft_atoi("42abc"));
//     return (0);
// }
