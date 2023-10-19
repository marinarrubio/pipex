/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marubio- <marubio-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 12:05:35 by marubio-          #+#    #+#             */
/*   Updated: 2023/02/08 19:56:50 by marubio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * It copies the string pointed to by s1 into a newly allocated space in memory.
 * 
 * @param s1 The string to be copied.
 * 
 * @return A pointer to a new string which is a duplicate of the string s1.
 */
char	*ft_strdup(const char *s1)
{
	int		i;
	char	*dst;

	i = 0;
	while (s1[i])
		i++;
	dst = malloc(sizeof(char) * i + 1);
	i = 0;
	if (dst == '\0')
		return (NULL);
	while (s1[i])
	{
		dst[i] = s1[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
