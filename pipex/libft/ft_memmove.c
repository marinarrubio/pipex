/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marubio- <marubio-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 12:55:20 by marubio-          #+#    #+#             */
/*   Updated: 2023/02/08 19:56:19 by marubio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * If the destination is less than the source, copy the source to the 
 * destination one byte at a time.
 * If the destination is greater than the source, 
 * copy the source to the destination one byte at a
 * time, starting from the end of the source and destination
 * 
 * @param dst This is the destination array where the content is to be copied,
 * type-casted to a pointer.
 * @param src The source string.
 * @param len The number of bytes to copy.
 * 
 * @return A pointer to the destination string.
 */
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s1;
	char	*s2;

	s1 = (char *)src;
	s2 = (char *)dst;
	if (s2 < s1)
	{
		while (len--)
		{
			*s2++ = *s1++;
		}
	}
	if (s2 > s1)
	{
		s2 += len;
		s1 += len;
		while (len--)
		{
			*--s2 = *--s1;
		}
	}
	return (dst);
}
