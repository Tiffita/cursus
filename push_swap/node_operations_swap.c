/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_operations_swap.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prmarott <prmarott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 17:45:09 by prmarott          #+#    #+#             */
/*   Updated: 2024/04/12 14:12:34 by prmarott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	do_sa(t_stack **stack_a)
{
	swapa(stack_a);
	ft_putstr("sa\n");
}

void	do_sb(t_stack **stack_b)
{
	swapa(stack_b);
	ft_putstr("sb\n");
}

static	void		swapa(t_stack **stack)
{
	t_stack	*tmp;

	if (!*stack || (*stack)->next == NULL)
		return ;
	tmp = *stack;
	*stack = (*stack)->next;
	tmp->next = (*stack)->next;
	(*stack)->next = tmp;
}

void	do_ss(t_stack **stack_a, t_stack **stack_b)
{
	swapa(stack_a);
	swapa(stack_b);
	ft_putstr("ss\n");
}
