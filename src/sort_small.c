/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbourcy <bbourcy@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 14:08:34 by bbourcy           #+#    #+#             */
/*   Updated: 2022/04/20 15:03:51 by bbourcy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sort_two(t_list **stack_a)
{
	if (((*stack_a)->data > (*stack_a)->next->data))
		sa(stack_a);
}

void	sort_three(t_list **stack_a)
{
	int	a;
	int	b;
	int	c;

	a = (*stack_a)->data;
	b = (*stack_a)->next->data;
	c = (*stack_a)->next->next->data;
	if ((a > b) && (b < c) && (c > a))
		sa(stack_a);
	if ((a > b) && (b > c) && (c < a))
	{
		sa(stack_a);
		rra(stack_a);
	}
	if ((a > b) && (b < c) && (c < a))
		ra(stack_a);
	if ((a < b) && (b > c) && (c > a))
	{
		sa(stack_a);
		ra(stack_a);
	}
	if ((a < b) && (b > c) && (c < a))
		rra(stack_a);
}

void	sort_four_six(t_list **stack_a, t_list **stack_b)
{
	while (len_node(*stack_a) != 3)
	{
		while ((*stack_a)->data != min_data(*stack_a))
			ra(stack_a);
		pb(stack_a, stack_b);
		if (!(check_sort(*stack_a)) && (len_node(*stack_a) == 3))
			sort_three(stack_a);
	}
	while (*stack_b)
		pa(stack_a, stack_b);
}