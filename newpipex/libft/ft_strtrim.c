/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraetz <agraetz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 11:19:23 by agraetz           #+#    #+#             */
/*   Updated: 2022/02/14 14:08:41 by agraetz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	find_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	start;
	size_t	end;

	start = 0;
	i = 0;
	while (s1[start] && find_set(s1[start], set))
	{
		start++;
	}
	end = ft_strlen(s1);
	while (end > start && find_set(s1[end - 1], set))
	{
		end--;
	}
	str = malloc(sizeof(*s1) * (end - start + 1));
	if (!str)
		return (NULL);
	while (start < end)
	{
		str[i++] = s1[start++];
	}
	str[i] = '\0';
	return (str);
}
