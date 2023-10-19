/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marubio- <marubio-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 18:44:40 by marubio-          #+#    #+#             */
/*   Updated: 2023/02/08 19:49:56 by marubio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * It prints the number n to the file descriptor fd.
 * 
 * @param n the number to be printed
 * @param fd file descriptor
 */
void	ft_putnbr_fd(int n, int fd)
{	
	char	un;

	if (n != -2147483648)
	{
		if (n >= 0)
		{
			un = (n % 10) + '0';
			n = (n / 10);
			if (n != 0)
				ft_putnbr_fd(n, fd);
			write(fd, &un, 1);
		}
		else
		{
			un = ((n * -1) % 10) + '0';
			n = (n / 10);
			if (n != 0)
				ft_putnbr_fd(n, fd);
			else
				write(fd, "-", 1);
			write(fd, &un, 1);
		}
	}
	else
		write(fd, "-2147483648", 11);
}
