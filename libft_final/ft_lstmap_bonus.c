/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prmarott <prmarott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 04:20:22 by prmarott          #+#    #+#             */
/*   Updated: 2023/10/17 04:50:52 by prmarott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list		*new;
	t_list		*c;
	t_list		*temp;

	if (lst == 0 || f == 0)
		return (0);
	new = ft_lstnew(f(lst->content));
	if (!new)
		return (0);
	c = new;
	lst = lst->next;
	while (lst)
	{
		temp = ft_lstnew(f(lst->content));
		if (!temp)
		{
			ft_lstclear(&new, del);
			return (0);
		}
		c->next = temp;
		c = temp;
		lst = lst->next;
	}
	return (new);
}
