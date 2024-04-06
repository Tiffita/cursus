/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prmarott <prmarott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 17:37:14 by prmarott          #+#    #+#             */
/*   Updated: 2024/03/27 18:18:35 by prmarott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_args(char **argv)
{
	int i;
	int j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while ((argv[i][j]) != '\0')
		{
			if (ft_isalpha(argv[i][j]))
				ft_error();
			j++;
		}
		i++;
	}
	if (!ft_check_error(argv, 1, 0))
		return (false);
	return (true);
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
