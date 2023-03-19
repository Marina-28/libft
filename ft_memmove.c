/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjeana <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 21:57:07 by bjeana            #+#    #+#             */
/*   Updated: 2021/10/22 10:37:33 by bjeana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int				i;
	unsigned char	*a;
	unsigned char	*b;

	a = (unsigned char *)dst;
	b = (unsigned char *)src;
	i = (int)len;
	if (a == '\0' && b == '\0')
		return (NULL);
	if ((b - a) < 0)
	{
		while (--i >= 0)
			a[i] = b[i];
	}
	else if ((b - a) > 0)
	{
		i = -1;
		while (++i < (int)len)
			a[i] = b[i];
	}
	return (a);
}
