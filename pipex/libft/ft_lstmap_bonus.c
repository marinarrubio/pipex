/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marubio- <marubio-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 10:35:14 by marubio-          #+#    #+#             */
/*   Updated: 2023/02/08 20:34:57 by marubio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*ft_errordelete(t_list *lst, void (*del)(void *), void *content)
{
	del(content);
	ft_lstclear(&lst, del);
	return (NULL);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void(*del)(void *))
{
	t_list	*lst2;
	t_list	*cp;
	void	*content_;

	if (!f || !del || !lst)
		return (0);
	content_ = f(lst->content);
	lst2 = ft_lstnew(content_);
	if (!content_ || !lst2)
		return (ft_errordelete(lst2, del, content_));
	cp = lst2;
	lst = lst -> next;
	while (lst)
	{
		content_ = f(lst->content);
		lst2 ->next = ft_lstnew(content_);
		if (!content_ || !lst2 ->next)
			return (ft_errordelete(cp, del, content_));
		lst2 = lst2 -> next;
		lst = lst -> next;
	}
	return (cp);
}
