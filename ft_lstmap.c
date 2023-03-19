/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjeana <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 22:01:54 by bjeana            #+#    #+#             */
/*   Updated: 2021/10/22 10:11:57 by bjeana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_elem;

	new_list = NULL;
	while (lst != NULL)
	{
		new_elem = ft_lstnew(f(lst ->content));
		if (new_elem == NULL)
			ft_lstclear(&new_list, del);
		ft_lstadd_back(&new_list, new_elem);
		lst = lst ->next;
	}
	return (new_list);
}
