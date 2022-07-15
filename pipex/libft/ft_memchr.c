/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anniegraetz <anniegraetz@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 14:32:13 by agraetz           #+#    #+#             */
/*   Updated: 2022/02/08 14:43:53 by agraetz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	a;

	str = (unsigned char *) s;
	a = (unsigned char) c;
	while (n != '\0')
	{
		if (*str == a)
		{
			return (str);
		}
		str++;
		n--;
	}
	return (0);
}
