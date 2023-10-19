/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marubio- <marubio-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 19:19:49 by marubio-          #+#    #+#             */
/*   Updated: 2023/02/08 20:50:06 by marubio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * It returns 1 if the character s1 is in the string str, and 0 otherwise
 * 
 * @param str The string to search in.
 * @param s1 The character to search for.
 * 
 * @return the index of the first occurence of the character s1 in the string 
 * str.
 */
int	where_is_set(char const *str, char s1)
{
	int	i;

	i = 0;
	while (str[i])
		if (str[i++] == s1)
			return (1);
	return (0);
}

/**
 * It takes a string and a set of characters, and returns a copy of the string 
 * with all the characters in the set removed from the beginning and end of the 
 * string
 * 
 * @param s1 the string to be trimmed
 * @param set the set of characters to trim
 * 
 * @return A pointer to a new string.
 */
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	size_t	start;
	size_t	end;
	char	*trimmed;

	len = ft_strlen(s1);
	start = 0;
	end = len - 1;
	if (s1 == NULL || set == NULL)
		return (0);
	while (s1[start] && where_is_set(set, s1[start]))
		start++;
	if (len > 0)
		while (s1 && where_is_set(set, s1[end]))
			end--;
	trimmed = ft_substr(s1, start, ((end - start) + 1));
	return (trimmed);
}
