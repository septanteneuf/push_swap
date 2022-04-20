/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbourcy <bbourcy@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 13:36:52 by bbourcy           #+#    #+#             */
/*   Updated: 2022/04/20 15:03:51 by bbourcy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static void	free_node(t_list *node)
{
	t_list	*tmp;

	while (node)
	{
		tmp = node;
		node = node->next;
		if (tmp)
			free(tmp);
	}
	node = NULL;
}

void	sort(int argc, t_list **stack_a, t_list **stack_b)
{
	if (argc == 3)
		sort_two(stack_a);
	if (argc == 4)
		sort_three(stack_a);
	if (argc >= 5 && argc <= 7)
		sort_four_six(stack_a, stack_b);
	if (argc > 7 && argc <= 101)
		sort_100(stack_a, stack_b);
	if (argc > 101)
		sort_500(stack_a, stack_b);
}

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;

	if (argc > 2)
	{
		stack_a = create_node(argc, argv);
		check(stack_a);
		sort_id(&stack_a, argc);
		stack_b = NULL;
		sort(argc, &stack_a, &stack_b);
		free_node(stack_a);
	}
	return (0);
}