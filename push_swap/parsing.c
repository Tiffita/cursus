/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prmarott <prmarott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 17:35:51 by prmarott          #+#    #+#             */
/*   Updated: 2024/03/27 18:19:40 by prmarott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	parsing(char *av, t_stack **stack_a)
{
	char		**input;
	long int	n;
	int			i;

	input = ft_split(av, ' ');
	i = 0;
	while (input[i] != '\0')
	{
		if (check_input(input[i]))
		{
			n = ft_atoi(input[i]);
			if (n > INT_MAX || n < INT_MIN)
				error_exit(stack_a, NULL);
			stack_add(stack_a, stack_new(n));
		}
		else
			error_exit(NULL, NULL);
		free(input[i]);
		i++;
	}
	free(input);
}
