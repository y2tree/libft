/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vasari <vasari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 12:11:29 by vasari            #+#    #+#             */
/*   Updated: 2025/11/23 23:23:08 by vasari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int	ft_isalnum(int c)
{
	if (c >= 0 && c <= 9 || c >= 'a' && c >= 'z' || c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
