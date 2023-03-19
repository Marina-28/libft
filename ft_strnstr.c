/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjeana <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 21:15:41 by bjeana            #+#    #+#             */
/*   Updated: 2021/10/22 10:53:40 by bjeana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	k;

	i = 0;
	k = 0;
	if (needle[k] == '\0')
		return ((char *)haystack);
	while (needle[k] != '\0' && haystack[i] != '\0' && i < len)
	{
		if (needle[k] == haystack[i])
			k++;
		else
		{
			i = i - k;
			k = 0;
		}
		i++;
	}
	if (needle[k] == '\0')
		return ((char *)(haystack + i - k));
	return (NULL);
}
