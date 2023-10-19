/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marubio- <marubio-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 13:37:09 by marubio-          #+#    #+#             */
/*   Updated: 2023/02/08 19:45:17 by marubio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/**
 * Ft_memset() takes a pointer to a memory area, a byte value, and a size, 
 * and fills the memory area with the given byte value
 * 
 * @param b This is the pointer to the memory area to be filled.
 * @param c the character to fill the memory with
 * @param len the number of bytes to fill
 * 
 * @return The address of the first byte of the memory area b.
 */
void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = c;
		i++;
	}
	return (b);
}
