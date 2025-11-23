/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vasari <vasari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 21:30:12 by vasari            #+#    #+#             */
/*   Updated: 2025/11/23 21:31:07 by vasari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}

// int	main(void)
// {
// 	printf("%c\n", ft_toupper('h'));
// 	printf("%c\n", ft_toupper('3'));
// 	printf("%c\n", ft_toupper('s'));
// 	printf("%c\n", ft_toupper('D'));

// 	return (0);
// }