/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marubio- <marubio-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 10:34:57 by marubio-          #+#    #+#             */
/*   Updated: 2023/02/08 20:41:15 by marubio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * It takes a pointer to a pointer to a linked list, and a pointer to a 
 * function that takes a void pointer and returns nothing. 
 * It then iterates through the linked list, calling the function on each
 * element, and then frees the element
 * 
 * @param lst A pointer to the first element of a linked list.
 * @param del a pointer to a function that takes a single argument and frees
 * the memory of the argument.
 */
void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*aux;
	t_list	*aux2;

	aux = *lst;
	while (aux)
	{
		aux2 = aux -> next;
		del(aux -> content);
		free(aux);
		aux = aux2;
	}
	*lst = NULL;
}
