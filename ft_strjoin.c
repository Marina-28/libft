/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjeana <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 21:42:10 by bjeana            #+#    #+#             */
/*   Updated: 2021/10/22 10:45:00 by bjeana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_fill(char const *s1, char const *s2, char *str)
{
	int		i;
	int		j;
	size_t	n;

	i = 0;
	j = 0;
	n = 0;
	while (n < (ft_strlen(s1) + ft_strlen(s2)))
	{
		while (s1[i] != '\0')
		{
			str[n] = s1[i];
			n++;
			i++;
		}
		if (s2[j] != '\0')
		{
			str[n] = s2[j];
			j++;
			n++;
		}
	}
	str[n] = '\0';
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s1 == NULL)
		return ((char *)s2);
	if (s2 == NULL)
		return ((char *)s1);
	str = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	ft_fill(s1, s2, str);
	return (str);
}
