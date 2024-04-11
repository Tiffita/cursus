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

void	error_show(t_stack **stack_a, t_stack **stack_b)
{
	if (stack_a == NULL || *stack_a != NULL)
		free_stack(stack_a);
	if (stack_b == NULL || *stack_b != NULL)
		free_stack(stack_b);
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


int	check_is_dup(t_stack *to_check)
{
	t_stack	*tmp_one;
	t_stack	*tmp_two;

	tmp = to_check;
	while (tmp_one)
	{
		tmp_two = tmp_one->next;
		while (tmp_two)
		{
			if (tmp_one->value == tmp_two->value)
				return (1);
			tmp_two = tmp_two->next;
		}
		tmp_one = tmp_one->next;
	}
	return (0);
}

int	abs(int nb)
{
	if (nb < 0)
		return (nb * -1);
	return (nb);
}
