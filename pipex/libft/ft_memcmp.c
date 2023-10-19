/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marubio- <marubio-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 14:54:33 by marubio-          #+#    #+#             */
/*   Updated: 2023/02/08 19:56:39 by marubio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The function ft_memcmp() compares the first n bytes of the memory area s1 
 * to the first n bytes of the memory area s2
 * 
 * @param s1 This is the first string to be compared.
 * @param s2 The string to compare to.
 * @param n The number of bytes to compare.
 * 
 * @return The difference between the two strings.
 */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*ps1;
	unsigned char	*ps2;

	i = 0;
	ps1 = (unsigned char *)s1;
	ps2 = (unsigned char *)s2;
	while (i < n)
	{
		if (ps2[i] != ps1[i])
			return (ps1[i] - ps2[i]);
		i++;
	}
	return (0);
}
