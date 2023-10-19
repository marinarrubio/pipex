/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marubio- <marubio-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 10:35:22 by marubio-          #+#    #+#             */
/*   Updated: 2023/06/26 13:52:29 by marubio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * It counts the number of words in a string
 * 
 * @param s The string to be split
 * @param c the delimiter
 * 
 * @return The number of words in the string.
 */
static int	num_words(char const *s, char c)
{
	int	word;
	int	i;

	i = 0;
	word = 0;
	if (!s)
		return (0);
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || !s[i + 1]))
			word++;
		i++;
	}
	return (word);
}

/**
 * It takes a string and a character, and returns a string containing 
 * the first word in the string, up to the character
 * 
 * @param s the string to be split
 * @param c the delimiter
 * 
 * @return A pointer to a string.
 */
static char	*malloc_for_word(char const *s, char c)
{
	char	*word;
	int		i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	word = malloc(i + 1);
	if (!word)
		return (NULL);
	i = 0;
	while (s[i] && s[i] != c)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

/**
 * It takes a string and splits it into an array of strings, each 
 * string being a word from the original string
 * 
 * @param array the array of strings to be freed
 * @param j the number of elements in the array
 * 
 * @return A pointer to a char array.
 */
static char	**just_for_free(char **array, int j)
{
	while (j-- > 0)
		free (array[j]);
	free (array);
	return (NULL);
}

/**
 * It takes a string and a character, and returns an array of strings, 
 * each of which is a word from the
 * original string, separated by the character
 * 
 * @param s the string to be split
 * @param c the character to split on
 * 
 * @return An array of strings.
 */
char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**array;

	i = 0;
	j = 0;
	array = malloc(sizeof(char *) * (num_words(s, c) + 1));
	if (!array || !s)
		return (NULL);
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			array[j] = malloc_for_word(s + i, c);
			if (!array[j])
				return (just_for_free(array, j));
			while (s[i] && s[i] != c)
				i++;
			j++;
		}
	}
	array[j] = NULL;
	return (array);
}
