/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjeana <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 21:19:27 by bjeana            #+#    #+#             */
/*   Updated: 2021/10/22 10:52:57 by bjeana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const	*s, char (*f)(unsigned int, char))
{
	int		i;
	int		q;
	char	*res;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	while (s[i] != '\0')
		i++;
	res = (char *)malloc((i + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);
	q = 0;
	while (q < i)
	{
		res[q] = f(q, s[q]);
		q++;
	}
	res[q] = '\0';
	return (res);
}
