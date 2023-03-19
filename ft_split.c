/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjeana <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 21:48:40 by bjeana            #+#    #+#             */
/*   Updated: 2021/10/19 21:50:58 by bjeana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(char const *s, char c)
{
	int	word;

	word = 0;
	while (*s != '\0')
	{
		if (*s != c)
		{
			word++;
			while (*s != c && *s != '\0')
				s++;
		}
		else
			s++;
	}
	return (word);
}

static char	**ft_free(char	**arr, int i)
{
	while (i <= 0)
	{
		free(arr[i]);
		i--;
	}
	free(arr);
	return (NULL);
}

static char	*create_word(char const *s, char c)
{
	char	*arr;
	int		i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	arr = (char *)malloc((i + 1) * sizeof(char));
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0' && s[i] != c)
	{
		arr[i] = s[i];
		i++;
	}
	arr[i] = '\0';
	return (arr);
}

static char	**ft_fill_arr(char const *s, char c, char	**arr, int word)
{
	int	i;

	i = 0;
	while (i < word && *s != '\0')
	{
		if (*s != c)
		{
			arr[i] = create_word(s, c);
			if (arr[i] == NULL)
				return (ft_free(arr, i));
			i++;
			while (*s != c && *s != '\0')
				s++;
		}
		s++;
	}
	arr[i] = NULL;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		word;

	if (s == NULL)
		return (NULL);
	word = count_word(s, c);
	arr = (char **)malloc((word + 1) * sizeof(char *));
	if (arr == NULL)
		return (NULL);
	return (ft_fill_arr(s, c, arr, word));
}
