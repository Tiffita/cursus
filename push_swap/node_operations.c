/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prmarott <prmarott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 17:45:09 by prmarott          #+#    #+#             */
/*   Updated: 2024/03/27 18:19:33 by prmarott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

Node	*create_node(int data, int range)
{
	Node	*new_node;

	new_node = (Node *)malloc(sizeof(Node));
	if (new_node != NULL)
	{
		new_node->data = data;
		new_node->range = range;
		new_node->prev = NULL;
		new_node->next = NULL;
	}
	return (new_node);
}

void	push(Node **top, int value)
{
	Node	*new_node;

	new_node = create_node(value);
	if (new_node)
	{
		new_node->next = *top;
		*top = new_node;
	}
}

void	push(Node **top, int value, int range)
{
	Node	*new_node;

	new_node = create_node(value, range);
	if (new_node)
	{
		if (*top == NULL)
		{
			new_node->next = new_node;
			new_node->prev = new_node;
		}
		else
		{
			new_node->next = *top;
			new_node->prev = (*top)->prev;
			(*top)->prev->next = new_node;
			(*top)->prev = new_node;
		}
		*top = new_node;
	}
}

int	pop(Node **top)
{
	int		data;
	Node	*temp;

	if (is_empty(*top))
	{
		printf("Error: Stack is empty\n");
		return (INT_MIN);
	}
	data = (*top)->data;
	temp = *top;
	*top = (*top)->next;
	free(temp);
	return (data);
}

int	pop(Node **top)
{
	int		data;
	Node	*temp;

	if (is_empty(*top))
	{
		ft_printf("Error: Stack is empty\n");
		return (INT_MIN);
	}
	data = (*top)->data;
	temp = *top;
	if ((*top)->next == *top)
	{
		*top = NULL;
	}
	else
	{
		(*top)->prev->next = (*top)->next;
		(*top)->next->prev = (*top)->prev;
		*top = (*top)->next;
	}
	free(temp);
	return (data);
}
