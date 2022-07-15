/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraetz <agraetz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 10:46:07 by agraetz           #+#    #+#             */
/*   Updated: 2022/02/08 15:10:43 by agraetz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
	{
		while (src[i])
		{
			i++;
		}
		return (i);
	}
	while (src[i] && i < dstsize - 1)
	{
		dest[i] = src[i];
		i++;
	}
	if (i < dstsize)
	{
		dest[i] = '\0';
	}
	while (src[i])
	{
		i++;
	}
	return (i);
}
