/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraetz <agraetz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 12:49:17 by agraetz           #+#    #+#             */
/*   Updated: 2022/02/08 10:56:39 by agraetz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*space;
	size_t	i;

	i = size * count;
	space = malloc(i);
	if (!space)
	{
		return (NULL);
	}
	ft_memset(space, 0, i);
	return (space);
}
