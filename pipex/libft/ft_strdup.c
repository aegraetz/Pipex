/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraetz <agraetz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 12:18:46 by agraetz           #+#    #+#             */
/*   Updated: 2022/02/08 11:15:19 by agraetz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*newstr;
	int		size;
	int		i;

	size = ft_strlen(src);
	newstr = malloc(sizeof(*newstr) * (size + 1));
	if (newstr == 0)
	{
		return (0);
	}
	i = 0;
	while (src[i] != '\0')
	{
		newstr[i] = src[i];
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}
