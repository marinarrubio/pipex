/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marubio- <marubio-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 12:39:01 by marubio-          #+#    #+#             */
/*   Updated: 2023/02/07 11:57:51 by marubio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Ft_substr() returns a pointer to a new string which is a substring of the 
 * string pointed to by s, starting at index start and of length len.
 * 
 * @param s The string to be split.
 * @param start the index of the first character to include in the substring.
 * @param len the length of the substring
 * 
 * @return A pointer to a new string.
 */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	i;

	i = 0;
	if (len > ft_strlen(s) || (len + start) > ft_strlen(s))
		len = (ft_strlen(s) - start);
	if (start >= ft_strlen(s))
		len = 0;
	sub = malloc(len + 1);
	if (!sub)
		return (NULL);
	while (s[i] && len)
	{
			sub[i] = s[start];
			start++;
			i++;
			len--;
	}
	sub[i] = '\0';
	return (sub);
}
