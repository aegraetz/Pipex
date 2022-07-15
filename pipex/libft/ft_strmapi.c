/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraetz <agraetz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 11:29:42 by anniegraetz       #+#    #+#             */
/*   Updated: 2022/02/08 11:53:43 by agraetz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*res;

	i = 0;
	if (!s || (!s && !f))
	{
		return (ft_strdup(" "));
	}
	else if (!f)
	{
		return (ft_strdup(s));
	}
	res = ft_strdup(s);
	if (!res)
	{
		return (res = NULL);
	}
	while (s[i])
	{
		res[i] = (*f)(i, s[i]);
		i++;
	}
	return (res);
}
