/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prmarott <prmarott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 04:20:22 by prmarott          #+#    #+#             */
/*   Updated: 2023/10/18 19:42:25 by prmarott         ###   ########.fr       */
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
	new = ft_lstnew(NULL);
	if (!new)
		return (0);
	new -> content = (f(lst->content));
	c = new;
	lst = lst->next;
	while (lst)
	{
		temp = ft_lstnew(NULL);
		if (!temp)
			return (ft_lstclear(&new, del), NULL);
		temp -> content = (f(lst->content));
		c->next = temp;
		c = temp;
		lst = lst->next;
	}
	return (new);
}
