/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraetz <agraetz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 15:54:01 by agraetz           #+#    #+#             */
/*   Updated: 2022/02/14 12:16:17 by agraetz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subsize;
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	subsize = malloc(sizeof(char) * (len + 1));
	if (subsize == 0)
	{
		return (NULL);
	}
	while (s[i])
	{
		if (i >= start && j < len)
		{
			subsize[j] = s[i];
			j++;
		}
		i++;
	}
	subsize[j] = '\0';
	return (subsize);
}
