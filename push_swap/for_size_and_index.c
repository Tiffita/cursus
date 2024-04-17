/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   for_size_and_index.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prmarott <prmarott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 12:30:10 by prmarott          #+#    #+#             */
/*   Updated: 2024/04/11 16:00:41 by prmarott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	get_index(t_stack *stack_a, int stack_size)
{
	t_stack	*ptr;
	t_stack	*big;
	int		value;

	while (--stack_size > 0)
	{
		ptr = stack_a;
		big = NULL;
		value = INT_MIN;
		while (ptr)
		{
			if (ptr->value == INT_MIN && ptr->index == 0)
				ptr->index = 1;
			if (ptr->value > value && ptr->index == 0)
			{
				value = ptr->value;
				big = ptr;
				ptr = ptr->next;
			}
			else
				ptr = ptr->next;
		}
		if (big != NULL)
			big->index = stack_size;
	}
}

int	get_size(t_stack	*stack)
{
	int	size;

	size = 0;
	if (!stack)
		return (0);
	while (stack)
	{
		stack = stack->next;
		size++;
	}
	return (size);
}
