/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_operations.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prmarott <prmarott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 17:57:10 by prmarott          #+#    #+#             */
/*   Updated: 2024/03/27 18:19:44 by prmarott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_operations(int *operations, int count)
{
	int	i;

	i = 0;
	while (i < count)
		i++;
	ft_printf("%d ", operations[i]);
	ft_printf("\n");
}

void	print_operations(int *operations, int count)
{
	char buffer[20];

	while (operations != NULL)
	{
		ft_itoa(operations->data, buffer, 10);
		write(1, buffer, ft_strlen(buffer));
		write(1, " ", 1);
		operations = operations->next;
	}
	write(1, "\n", 1);
}