/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marubio- <marubio-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 15:50:23 by marubio-          #+#    #+#             */
/*   Updated: 2023/02/07 12:06:07 by marubio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * "ft_strmapi() applies the function f to each character of the string s, 
 * passing its index as first argument,
 * and returns a new string resulting from the successive 
 * applications of f."
 * 
 * The function ft_strmapi() is similar to ft_strmap(), except that it passes
 * the index of the
 * character as a second argument to the function f
 * 
 * @param s The string to be mapped.
 * @param f a function that takes an unsigned int and a char as parameters and
 * returns a char.
 * 
 * @return A pointer to a new string.
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*s2;

	i = 0;
	s2 = malloc(ft_strlen(s) + 1);
	if (!s2)
		return (NULL);
	while (s[i])
	{
		s2[i] = f(i, s[i]);
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
