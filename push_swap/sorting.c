int	check_sorted(t_stack *stack)
{
	while (stack->next != NULL)
	{
		if (stack->value > stack->next->value)
			return (0);
		stack = stack->next;
	}
	return (1);
}

static int	search_biggest_index(t_stack *stack)
{
	int	index;

	index = stack->index;
	while (stack)
	{
		if (stack->index > index)
			index = stack->index;
		stack = stack->next;
	}
	return (index);
}

void	do_sort_three(t_stack **stack)
{
	int	big;

	if (is_sorted(*stack))
		return ;
	big = search_biggest_index(*stack);
	if ((*stack)->index == big)
		do_ra(stack);
	else if ((*stack)->next->index == big)
		do_rra(stack);
	if ((*stack)->index > (*stack)->next->index)
		do_sa(stack);
}
