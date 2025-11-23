/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vasari <vasari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 21:26:08 by vasari            #+#    #+#             */
/*   Updated: 2025/11/23 23:22:55 by vasari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*mini_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (!dest || !src)
		return (NULL);
	if (d > s)
	{
		i = n;
		while (i-- > 0)
			d[i] = s[i];
	}
	else
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}

/*
int	main(void)
{
	char	str1[20] = "hello";
	char	dest1[20];
	char	str2[20] = "hello world";
	char	str3[20] = "hello world";
	char	str4[20] = "test";
	char	str5[20] = "zero";

	// Test 1 : Pas d'overlap
	mini_memmove(dest1, str1, 6);
	printf("Test 1 : %s\n", dest1);  // "hello"
	// Test 2 : Overlap vers la droite (d > s)
	mini_memmove(str2 + 2, str2, 5);
	printf("Test 2 : %s\n", str2);  // "hehello rld"
	// Test 3 : Overlap vers la gauche (d < s)
	mini_memmove(str3, str3 + 2, 5);
	printf("Test 3 : %s\n", str3);  // "llo world"
	// Test 4 : dest == src
	mini_memmove(str4, str4, 4);
	printf("Test 4 : %s\n", str4);  // "test" (inchangé)
	// Test 5 : n = 0
	mini_memmove(str5, "xxx", 0);
	printf("Test 5 : %s\n", str5);  // "zero" (inchangé)
	return (0);
}
*/