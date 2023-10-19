/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marubio- <marubio-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 12:41:07 by marubio-          #+#    #+#             */
/*   Updated: 2023/02/08 19:56:36 by marubio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The function ft_memchr() locates the first occurrence of c (converted to 
 * an unsigned char) in string s
 * 
 * @param s The memory area to be searched.
 * @param c The character to search for.
 * @param n The number of bytes to be searched.
 * 
 * @return A pointer to the first occurrence of the character c in 
 * the first n bytes of the string pointed to, by the argument str.
 */
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	cs;
	size_t			i;

	ptr = (unsigned char *)s;
	cs = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (*(ptr + i) == cs)
			return (ptr + i);
		i++;
	}
	return (0);
}
