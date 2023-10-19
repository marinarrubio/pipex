/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marubio- <marubio-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 10:34:45 by marubio-          #+#    #+#             */
/*   Updated: 2023/02/08 20:41:38 by marubio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * This function takes a pointer to a linked list and a pointer to a function 
 * that takes a pointer to a void and returns nothing. 
 * It then frees the memory of the linked list and the memory of the content
 * of the linked list
 * 
 * @param lst The address of a pointer to a link.
 * @param del a function pointer that takes in a void pointer and returns 
 * nothing.
 */
void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst)
	{
		del(lst -> content);
		free(lst);
	}
}
