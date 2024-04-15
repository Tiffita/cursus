/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prmarott <prmarott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 18:19:57 by prmarott          #+#    #+#             */
/*   Updated: 2024/04/12 14:14:40 by prmarott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

typedef struct s_stack
{
	int				value;
	int				index;
	int				pos;
	int				target;
	int				cost_a;
	int				cost_b;
	struct s_stack	*next;
}	t_stack;

long		check_input(char *av);
void		error_show(t_stack **stack_a, t_stack **stack_b);
void		free_stack(t_stack **stack);
long int	new_atoi(const char *str);
void		get_index(t_stack *stack_a, int stack_size);
t_stack		*stack_new(int value);
void		stack_add(t_stack **stack, t_stack *new);
t_stack		*get_bottom(t_stack *stack);
int			get_size(t_stack	*stack);
int			check_sorted(t_stack *stack);
void		do_sort_three(t_stack **stack);
void		do_sa(t_stack **stack_a);
void		do_sb(t_stack **stack_b);
void		do_ss(t_stack **stack_a, t_stack **stack_b);
void		ft_putstr(char *str);
void		do_ra(t_stack **stack_a);
void		do_rb(t_stack **stack_b);
void		do_rr(t_stack **stack_a, t_stack **stack_b);
t_stack		*check_bottom(t_stack *stack);
void		do_rra(t_stack **stack_a);
void		do_rrb(t_stack **stack_b);
void		do_rrr(t_stack **stack_a, t_stack **stack_b);
void		do_pa(t_stack **stack_a, t_stack **stack_b);
void		do_pb(t_stack **stack_a, t_stack **stack_b);
void		do_sort(t_stack **stack_a, t_stack **stack_b);
void		give_target_position(t_stack **stack_a, t_stack **stack_b);
void		cost(t_stack **stack_a, t_stack **stack_b);
void		check_cheapest_move(t_stack **stack_a, t_stack **stack_b);
int			get_abs(int nb);
void		do_move(t_stack **a, t_stack **b, int cost_a, int cost_b);
int			check_lowest_index(t_stack **stack);
char		**ft_split(char const *s, char c);
void		parsing(char *av, t_stack **stack_a);
int			check_is_dup(t_stack *to_check);
size_t		ft_strlen(const char *s);

#endif
