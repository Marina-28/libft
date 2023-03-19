/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjeana <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 22:28:51 by bjeana            #+#    #+#             */
/*   Updated: 2021/10/22 10:11:11 by bjeana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*nxt;

	temp = *lst;
	if (temp != NULL)
	{
		while (temp != NULL)
		{
			nxt = temp ->next;
			del(temp ->content);
			free(temp);
			temp = nxt;
		}
	}
	*lst = NULL;
}
