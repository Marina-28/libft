/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjeana <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 21:13:21 by bjeana            #+#    #+#             */
/*   Updated: 2021/10/22 11:02:43 by bjeana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char	*s, int c)
{
	int		i;
	char	b;
	char	*a;

	i = ft_strlen(s) - 1;
	b = (char)c;
	a = (char *)s;
	if (b == '\0')
		return (&a[i + 1]);
	while (a[i] != b && i > 0 && a[i] != '\0')
		i--;
	if (a[i] != b)
		return (NULL);
	return (&a[i]);
}
