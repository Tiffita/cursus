/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prmarott <prmarott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 17:41:47 by prmarott          #+#    #+#             */
/*   Updated: 2024/03/27 18:19:16 by prmarott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	Node *stack_a = NULL;

	if (argc != 2)
	{
		write(2, "Error\n", 6);
		return (1);
	}

	// iniciar stack a , modificar split
	ft_split(argv[1], &stack_a);

	// actualizaciones del stack
	int *operations = (int *)malloc(sizeof(int) * 1000);
	int opCount = 0;

	//  algoritmo a hacer, llamar a funcion del algoritmo

	// ft_printf de instrucciones
	print_operations(operations, opCount);

	// hacer los free del split en caso de que diferentes av o string
	int i = 0;
	while (argv[i])
	{
		free(argv[i]);
		i++;
	}
	free(argv);
	freeStack(&stack_a);
	free(operations);

	return (0);
}