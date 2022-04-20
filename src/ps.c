/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbourcy <bbourcy@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 13:38:20 by bbourcy           #+#    #+#             */
/*   Updated: 2022/04/20 15:03:51 by bbourcy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	pa(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;

	if (stack_a && stack_b)
	{
		tmp = *stack_b;
		*stack_b = (*stack_b)->next;
		tmp->next = *stack_a;
		*stack_a = tmp;
		write(1, "pa\n", 3);
	}
	else
		return ;
}

void	pb(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;

	if (stack_a)
	{
		tmp = *stack_a;
		*stack_a = (*stack_a)->next;
		tmp->next = *stack_b;
		*stack_b = tmp;
		write(1, "pb\n", 3);
	}
	else
		return ;
}

void	sa(t_list **stack_a)
{
	t_list	*tmp;

	if ((*stack_a))
	{
		tmp = (*stack_a)->next;
		(*stack_a)->next = (*stack_a)->next->next;
		tmp->next = (*stack_a);
		(*stack_a) = tmp;
		write(1, "sa\n", 3);
	}
	else
		return ;
}

void	sb(t_list **stack_b)
{
	t_list	*tmp;

	if ((*stack_b)->next)
	{
		tmp = (*stack_b)->next;
		(*stack_b)->next = (*stack_b)->next->next;
		tmp->next = (*stack_b);
		(*stack_b) = tmp;
		write(1, "sb\n", 3);
	}
	else
		return ;
}

void	ss(t_list *stack_a, t_list *stack_b)
{
	if ((stack_a->next) && (stack_b->next))
	{
		sa(&stack_a);
		sb(&stack_b);
		write(1, "ss\n", 3);
	}
	else
		return ;
}