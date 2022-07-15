/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraetz <agraetz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 12:24:48 by anniegraetz       #+#    #+#             */
/*   Updated: 2022/02/08 14:19:40 by agraetz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*elem;

	newlst = NULL;
	if (lst == NULL)
	{
		return (NULL);
	}
	while (lst)
	{
		elem = ft_lstnew((*f)(lst -> content));
		if (elem == NULL)
		{
			ft_lstclear(&elem, *del);
		}
		else
		{
			ft_lstadd_back(&newlst, elem);
		}
		lst = lst -> next;
	}
	return (newlst);
}
