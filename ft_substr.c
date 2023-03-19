/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjeana <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 17:53:22 by bjeana            #+#    #+#             */
/*   Updated: 2021/10/22 11:08:11 by bjeana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_sub(char const	*s, unsigned int start, size_t	n)
{
	char	*sub;
	size_t	i;

	i = 0;
	sub = (char *)malloc((n + 1) * sizeof(char));
	if (sub == NULL)
		return (NULL);
	while (i != n)
	{
		sub[i] = s[start];
		i++;
		start++;
	}
	sub[i] = '\0';
	return (sub);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	k;
	char	*sub;

	i = 0;
	if (s == NULL)
		return (NULL);
	while (s[i] != '\0')
		i++;
	if ((start + len) > i && i > start)
	{
		k = i - start;
		sub = ft_sub(s, start, k);
		return (sub);
	}
	if (start < i)
	{
		sub = ft_sub(s, start, len);
		return (sub);
	}
	sub = (char *)malloc(1 * sizeof(char));
	sub[0] = '\0';
	return (sub);
}
