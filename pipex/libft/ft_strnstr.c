/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marubio- <marubio-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 13:11:43 by marubio-          #+#    #+#             */
/*   Updated: 2023/02/08 19:52:34 by marubio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * If the first character of needle is found in haystack, then check if 
 * the rest of needle is found in
 * haystack starting at the index of the first character of needle
 * 
 * @param haystack The string to search in
 * @param needle the string to find
 * @param len the maximum number of characters to search
 * 
 * @return The address of the first character of the substring.
 */
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*phaystack;
	char	*pneedle;

	i = 0;
	j = 0;
	phaystack = (char *)haystack;
	pneedle = (char *)needle;
	while (pneedle[i])
	{
		while (phaystack[i] != '\0' && i < len)
		{
			while (phaystack[i + j] == pneedle[j] && phaystack[i + j] != '\0'
				&& i + j < len)
				j++;
			if (pneedle[j] == '\0')
				return (&phaystack[i]);
			i++;
			j = 0;
		}
		return (NULL);
	}
	return (&phaystack[i]);
}
