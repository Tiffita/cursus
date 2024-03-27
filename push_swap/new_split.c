/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_split.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prmarott <prmarott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 17:53:20 by prmarott          #+#    #+#             */
/*   Updated: 2024/03/27 18:19:25 by prmarott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	new_split(char *input, Node **top)
{
	char	*token;

	token = ft_split(input, " ");
	while (token != NULL)
	{
		push(top, ft_atoi(token));
		token = ft_split(NULL, " ");
	}
}

void	ft_split_list(char *input, Node **top)
{
	char *token = ft_split(input, " ");
	int range = 1;
	while (token != NULL)
	{
		push(top, ft_atoi(token), range++);
		token = ft_split(NULL, " ");
	}
}