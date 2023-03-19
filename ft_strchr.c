/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjeana <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 21:46:50 by bjeana            #+#    #+#             */
/*   Updated: 2021/10/22 10:34:10 by bjeana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				i;
	unsigned char	b;
	unsigned char	*a;

	i = 0;
	b = (unsigned char)c;
	a = (unsigned char *)s;
	while ((a[i] != b) && (a[i] != '\0'))
		i++;
	if (a[i] != b)
		return (NULL);
	return ((char *)&a[i]);
}
