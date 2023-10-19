/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marubio- <marubio-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 11:35:16 by marubio-          #+#    #+#             */
/*   Updated: 2023/02/08 19:38:41 by marubio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * It takes a string, and returns an integer
 * 
 * @param str The string to be converted.
 * 
 * @return the integer value of the string passed as argument.
 */
int	ft_atoi(const char *str)
{
	int					i;
	unsigned long long	n;
	int					s;

	i = 0;
	n = 0;
	s = 1;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == ' '))
		i++;
	if (str[i] && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			s = s * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = n * 10 + (str[i] - '0');
		i++;
	}
	if (n > 9223372036854775807 && s == -1)
		return (0);
	if (n > 9223372036854775807 && s == 1)
		return (-1);
	return (n * s);
}
