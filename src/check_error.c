/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbourcy <bbourcy@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 19:56:06 by bbourcy           #+#    #+#             */
/*   Updated: 2022/04/20 15:52:42 by bbourcy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	check_double(t_list *node)
{
	t_list	*search;

	while (node)
	{
		search = node;
		while (search)
		{
			if ((node->data == search->data)
				&& (node->index != search->index))
				return (-1);
			search = search->next;
		}
		node = node->next;
	}
	return (0);
}

int	check_sort(t_list *node)
{
	while (node->next != NULL)
	{
		if (node->data > node->next->data)
			return (0);
		node = node->next;
	}
	return (-1);
}

int	check(t_list *node)
{
	if (check_sort(node))
		exit (0);
	if (check_double(node))
	{
		write(2, "Error\n", 6);
		exit (0);
	}
	return (0);
}