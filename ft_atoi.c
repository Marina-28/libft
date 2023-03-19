/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjeana <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 22:39:07 by bjeana            #+#    #+#             */
/*   Updated: 2021/10/22 10:20:07 by bjeana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check_long(int a, int k, const char *str, int n)
{
	if (a >= 19)
	{
		if (k > 0)
		{
			if (ft_strncmp((str - a), "9223372036854775807", 19) >= 0 || a > 19)
				n = -1;
		}
		else
		{
			if (ft_strncmp((str - a), "9223372036854775808", 19) >= 0 || a > 19)
				n = 0;
		}
	}
	return (n);
}

int	ft_atoi(const char *str)
{
	int	a;
	int	k;
	int	n;

	k = 1;
	n = 0;
	a = 0;
	while ((*str > 8 && *str < 14) || *str == 32)
		str++;
	if (*str == 43 || *str == 45)
	{
		if (*str == 45)
			k = k * (-1);
		str++;
	}
	while (*str == 48)
		str++;
	while (*str > 47 && *str < 58)
	{
		n = n * 10 + k * (*str - 48);
		str++;
		a++;
	}
	n = ft_check_long(a, k, str, n);
	return (n);
}
