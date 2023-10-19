/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marubio- <marubio-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 11:05:34 by marubio-          #+#    #+#             */
/*   Updated: 2023/02/08 19:52:59 by marubio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The above function returns a pointer to the last occurrence of the character
 * c in the string s.
 * 
 * @param s The string to search.
 * @param c The character to be located.
 * 
 * @return The address of the last occurrence of the character c 
 * in the string s.
 */
char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	while (i >= 0 && *s && (unsigned char)c >= 0)
	{
		if (s[i] == (unsigned char)c)
			return ((char *)&s[i]);
		i--;
	}
	if ((unsigned char)c == '\0')
		return ((char *)&s[i]);
	return (0);
}
