/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbourcy <bbourcy@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 16:47:38 by bbourcy           #+#    #+#             */
/*   Updated: 2022/04/20 15:17:47 by bbourcy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static int	position(t_list **stack_b, int len)
{
	t_list	*tmp;
	int		i;

	i = 0;
	tmp = *stack_b;
	while (tmp->id != len)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}

static void	sort_pa(t_list **stack_a, t_list **stack_b)
{
	int	len;

	while ((*stack_b) != NULL)
	{
		len = len_node(*stack_b) - 1;
		if ((*stack_b)->id != len && (len / 2) > position(stack_b, len))
			rb(stack_b);
		else if ((*stack_b)->id != len && (len / 2) <= position(stack_b, len))
			rrb(stack_b);
		else if ((*stack_b)->id == len)
			pa(stack_a, stack_b);
	}
}

void	sort_100(t_list **stack_a, t_list **stack_b)
{
	int	i;

	i = 0;
	while ((*stack_a) != NULL)
	{
		if (i > 1 && (*stack_a)->id <= i)
		{
			pb(stack_a, stack_b);
			i++;
			rb(stack_b);
		}
		else if ((*stack_a)->id <= i + 15)
		{
			pb(stack_a, stack_b);
			i++;
		}
		else
			ra(stack_a);
	}
	sort_pa(stack_a, stack_b);
}

void	sort_500(t_list **stack_a, t_list **stack_b)
{
	int	i;

	i = 0;
	while ((*stack_a) != NULL)
	{
		if (i > 1 && (*stack_a)->id <= i)
		{
			pb(stack_a, stack_b);
			i++;
			rb(stack_b);
		}
		else if ((*stack_a)->id <= i + 30)
		{
			pb(stack_a, stack_b),
			i++;
		}
		else
			ra(stack_a);
	}
	sort_pa(stack_a, stack_b);
}