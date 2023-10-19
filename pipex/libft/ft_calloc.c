/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marubio- <marubio-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 14:40:37 by marubio-          #+#    #+#             */
/*   Updated: 2023/02/08 19:43:46 by marubio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Ft_calloc() allocates memory for an array of count elements of size bytes
 * each and returns a pointer
 * to the allocated memory. The memory is set to zero. If the allocation fails,
 * the function returns NULL
 * 
 * @param count The number of elements to be allocated.
 * @param size The size of the memory block, in bytes.
 * 
 * @return A pointer to the allocated memory.
 */
void	*ft_calloc(size_t count, size_t size)
{
	void			*ptr;
	unsigned int	total;

	total = count * size;
	if (total < count && total < size)
		return (NULL);
	ptr = malloc(total);
	if (ptr == '\0')
		return (ptr);
	ft_bzero(ptr, total);
	return (ptr);
}
