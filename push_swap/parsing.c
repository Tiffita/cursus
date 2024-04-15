/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prmarott <prmarott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 17:35:51 by prmarott          #+#    #+#             */
/*   Updated: 2024/04/11 19:08:51 by prmarott         ###   ########.fr       */
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
	while (input[i] != NULL)
	{
		if (check_input(input[i]))
		{
			n = ft_atoi(input[i]);
			if (n > INT_MAX || n < INT_MIN)
				error_show(stack_a, NULL);
			stack_add(stack_a, stack_new(n));
		}
		else
			error_show(NULL, NULL);
		free(input[i]);
		i++;
	}
	free(input);
}

long	check_input(char	*str)
{
	int	i;

	i = 0;
	if ((str[i] == '-' || str[i] == '+') && (ft_strlen(str) > 1))
		i++;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
