/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjeana <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 20:56:51 by bjeana            #+#    #+#             */
/*   Updated: 2021/10/22 11:03:54 by bjeana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	begin(char const *s1, char const *set)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (*s1 != '\0' && set[i] != '\0')
	{
		if (set[i] == *s1)
		{
			count++;
			s1++;
			i = 0;
		}	
		else
			i++;
	}
	return (count);
}

static int	end(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	count;

	j = (ft_strlen(s1) - 1);
	i = 0;
	count = 0;
	while (j >= 0 && set[i] != '\0')
	{
		if (set[i] == s1[j])
		{
			count++;
			j--;
			i = 0;
		}	
		else
			i++;
	}
	return (count);
}

static char	*ft_trim_for_one(void)
{
	char	*s;

	s = (char *)malloc(1 * sizeof(char));
	if (s == NULL)
		return (NULL);
	s[0] = '\0';
	return (s);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s;
	size_t	j;
	size_t	i;	

	if (s1 == NULL)
		return (NULL);
	i = 0;
	j = begin(s1, set);
	if (j == ft_strlen(s1))
	{
		s = ft_trim_for_one();
		return (s);
	}
	s = (char *)malloc((ft_strlen(s1) - end(s1, set) - j + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	while (i < ft_strlen(s1) - end(s1, set) - begin(s1, set))
	{
		s[i] = s1[j];
		j++;
		i++;
	}
	s[i] = '\0';
	return (s);
}
