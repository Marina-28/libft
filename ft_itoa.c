/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjeana <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 17:51:15 by bjeana            #+#    #+#             */
/*   Updated: 2021/10/19 22:36:16 by bjeana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_strnum(int n, char *str, int i)
{
	int	d;
	int	a;

	a = -1;
	d = 1000000000;
	if (n < 0)
	{
		str[++a] = '-';
		if (n == -2147483648)
		{
			str[++a] = '2';
			n = -147483648;
		}
		n = n * (-1);
	}
	while (d != 1 && a != (i - 1))
	{
		if ((n / d) > 0)
			str[++a] = (n / d) % 10 + 48;
		d = d / 10;
	}
	str[++a] = n % 10 + 48;
	str[++a] = '\0';
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		d;

	i = 0;
	d = 1000000000;
	if (n < 0)
		i++;
	while (d != 1)
	{
		if ((n / d) != 0)
			i++;
		d = d / 10;
	}
	str = (char *)malloc((i + 2) * sizeof(char));
	if (str == NULL)
		return (NULL);
	ft_strnum(n, str, i);
	return (str);
}
