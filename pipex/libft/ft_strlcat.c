/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marubio- <marubio-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 23:18:30 by marubio-          #+#    #+#             */
/*   Updated: 2023/02/08 19:58:24 by marubio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

/**
 * The function ft_strlcat() appends the null-terminated string src to the 
 * end of dst. It will append
 * at most dstsize - strlen(dst) - 1 bytes, NUL-terminating the result
 * 
 * @param dst This is the destination string.
 * @param src The string to be appended.
 * @param dstsize The size of the destination buffer.
 * 
 * @return The total length of the string it tried to create.
 */
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	lendst;
	size_t	lensrc;
	size_t	lentotal;
	char	*psrc;

	i = 0;
	lendst = ft_strlen(dst);
	lensrc = ft_strlen(src);
	lentotal = 0;
	psrc = (char *)src;
	if (dstsize == 0)
	{
		return (lensrc);
	}
	if (dstsize <= lendst)
		lentotal = lensrc + dstsize;
	else if (dstsize > lendst)
		lentotal = lensrc + lendst;
	while (psrc[i] && lendst < (dstsize - 1))
	{
		dst[lendst++] = psrc[i++];
	}
	dst[lendst] = '\0';
	return (lentotal);
}
