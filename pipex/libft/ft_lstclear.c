/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraetz <agraetz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 11:53:12 by anniegraetz       #+#    #+#             */
/*   Updated: 2022/02/14 15:44:20 by agraetz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*hold;

	if (lst)
	{
		while (*lst)
		{
			hold = (*lst)-> next;
			ft_lstdelone(*lst, del);
			*lst = hold;
		}
	}
}
