/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraetz <agraetz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 12:05:22 by agraetz           #+#    #+#             */
/*   Updated: 2022/02/14 11:09:47 by agraetz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while ((dest[i] != '\0') && i < dstsize)
	{
		i++;
	}
	while ((src[j] != '\0') && (i + j + 1) < dstsize)
	{
		dest[i + j] = src[j];
		j++;
	}
	if (i < dstsize)
	{
		dest[i + j] = '\0';
	}
	return (i + ft_strlen(src));
}
