/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prmarott <prmarott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 14:43:59 by prmarott          #+#    #+#             */
/*   Updated: 2024/04/11 19:21:55 by prmarott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push_init(t_stack **stack_a, t_stack **stack_b)
{
	int	stack_size;
	int	pushes;
	int	i;

	stack_size = get_size(*stack_a);
	pushes = 0;
	i = 0;
	while (stack_size > 6 && i < stack_size && pushes < stack_size / 2)
	{
		if ((*stack_a)->index <= stack_size / 2)
		{
			do_pb(stack_a, stack_b);
			pushes++;
		}
		else
			do_ra(stack_a);
		i++;
	}
	while (stack_size - pushes > 3)
	{
		do_pb(stack_a, stack_b);
		pushes++;
	}
}

static void	sort_stack(t_stack **stack_a)
{
	int	lowest_p;
	int	stack_size;

	stack_size = get_size(*stack_a);
	lowest_p = check_lowest_index(stack_a);
	if (lowest_p > stack_size / 2)
	{
		while (lowest_p < stack_size)
		{
			do_rra(stack_a);
			lowest_p++;
		}
	}
	else
	{
		while (lowest_p > 0)
		{
			do_ra(stack_a);
			lowest_p--;
		}
	}
}

void	do_sort(t_stack **stack_a, t_stack **stack_b)
{
	push_init(stack_a, stack_b);
	do_sort_three(stack_a);
	while (*stack_b)
	{
		give_target_position(stack_a, stack_b);
		cost(stack_a, stack_b);
		check_cheapest_move(stack_a, stack_b);
	}
	if (!check_sorted(*stack_a))
		sort_stack(stack_a);
}
