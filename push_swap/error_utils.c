/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prmarott <prmarott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 17:35:36 by prmarott          #+#    #+#             */
/*   Updated: 2024/03/27 18:18:39 by prmarott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_sign(int c)
{
	if (c == '+' || c == '-')
		return (1);
	return (0);
}

void	ft_error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

int	ft_isspace(int c)
{
	if (c == ' ')
		return (1);
	return (0);
}

int	ft_sign(int c)
{
	if (c == '+' || c == '-')
		return (1);
	return (0);
}


int	ft_checkduplicate(t_stack *a)
{
	t_stack	*tmp;

	while (a)
	{
		tmp = a->next;
		while (tmp)
		{
			if (a->nbr == tmp->nbr)
				return (1);
			tmp = tmp->next;
		}
		a = a->next;
	}
	return (0);
}
