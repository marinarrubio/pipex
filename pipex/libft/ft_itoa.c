/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marubio- <marubio-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:10:28 by marubio-          #+#    #+#             */
/*   Updated: 2023/02/07 13:13:50 by marubio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * It takes a number, a position in a string, and a string, and it puts
 * the number in the string at the position
 * @param n the number to be converted
 * @param i the index of the string where the number will be placed
 * @param str the string that will be modified
 */
void	ft_putnbr_forstr(int n, int i, char *str)
{	
	char	un;

	if (n >= 0)
	{
		un = (n % 10) + '0';
		n = (n / 10);
		if (n != 0)
			ft_putnbr_forstr(n, i - 1, str);
		str[i] = un;
	}
	else
	{
		un = ((n % 10) * -1) + '0';
		n = (n / 10);
		if (n != 0)
			ft_putnbr_forstr(n, i - 1, str);
		else
			str[0] = '-';
		str[i] = un;
	}	
}

/**
 * It takes an integer and returns a string representation of that integer
 * 
 * @param n the number to convert
 * 
 * @return A string of the number n.
 */
char	*ft_itoa(int n)
{
	int		i;
	int		len;
	int		n2;
	char	*str;

	i = 0;
	if (n < 0)
		i = 1;
	n2 = n;
	len = 0;
	if (n == 0)
		len = 1;
	while (n2 != 0)
	{
		len++;
		n2 = n2 / 10;
	}
	str = malloc(len + i + 1);
	if (!str)
		return (0);
	i += len - 1;
	ft_putnbr_forstr(n, i, str);
	str[i + 1] = '\0';
	return (str);
}
