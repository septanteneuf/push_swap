/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbourcy <bbourcy@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 12:45:00 by bbourcy           #+#    #+#             */
/*   Updated: 2022/04/20 15:17:47 by bbourcy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	rra(t_list **stack_a)
{
	t_list	*tmp;
	t_list	*first;
	t_list	*last;

	if ((*stack_a)->next)
	{
		tmp = *stack_a;
		while (tmp->next->next != NULL)
			tmp = tmp->next;
		last = tmp;
		first = tmp->next;
		last->next = NULL;
		first->next = *stack_a;
		*stack_a = first;
		write(1, "rra\n", 4);
	}
	else
		return ;
}

void	rrb(t_list **stack_b)
{
	t_list	*tmp;
	t_list	*first;
	t_list	*last;

	if ((*stack_b)->next)
	{
		tmp = *stack_b;
		while (tmp->next->next != NULL)
			tmp = tmp->next;
		last = tmp;
		first = tmp->next;
		last->next = NULL;
		first->next = *stack_b;
		*stack_b = first;
		write(1, "rrb\n", 4);
	}
	else
		return ;
}

void	rrr(t_list *stack_a, t_list *stack_b)
{
	if ((stack_a->next) && (stack_b->next))
	{
		rra(&stack_a);
		rrb(&stack_b);
		write(1, "rrr\n", 4);
	}
	else
		return ;
}