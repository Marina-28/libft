/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjeana <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 15:31:44 by bjeana            #+#    #+#             */
/*   Updated: 2021/10/22 10:20:40 by bjeana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*a;
	size_t	i;

	i = 0;
	a = (char *)malloc(count * size);
	if (a == NULL)
		return (NULL);
	while (i < count * size)
	{
		a[i] = '\0';
		i++;
	}
	return ((void *)a);
}
