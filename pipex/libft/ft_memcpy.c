/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marubio- <marubio-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 12:18:39 by marubio-          #+#    #+#             */
/*   Updated: 2023/02/08 19:59:30 by marubio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

/**
 * Copy n bytes from memory area src to memory area dst
 * 
 * @param dst The destination string.
 * @param src The source string.
 * @param n the number of bytes to copy
 * 
 * @return A pointer to the destination string.
 */
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*s1;
	char	*s2;
	size_t	i;

	s1 = (char *)src;
	s2 = (char *)dst;
	i = 0;
	if (!dst && !src)
		return (0);
	while (i < n)
	{
		s2[i] = s1[i];
		i++;
	}
	return (s2);
}
