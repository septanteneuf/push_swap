/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbourcy <bbourcy@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 16:53:47 by bbourcy           #+#    #+#             */
/*   Updated: 2022/04/20 15:17:47 by bbourcy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	len_node(t_list *node)
{
	t_list	*tmp;
	int		len;

	if (!node)
		return (0);
	len = 0;
	tmp = node;
	while (tmp)
	{
		tmp = tmp->next;
		len++;
	}
	return (len);
}

void	sort_id(t_list **stack, int argc)
{
	t_list	*tmp;
	t_list	*min_tmp;
	int		i;
	int		j;

	j = 0;
	while (argc)
	{
		tmp = *stack;
		i = 2147483647;
		while (tmp)
		{
			if (tmp->data <= i && tmp->id == -1)
			{
				i = tmp->data;
				min_tmp = tmp;
			}
			tmp = tmp->next;
		}
		min_tmp->id += j;
		j++;
		argc--;
	}
}

int	min_data(t_list *node)
{
	t_list	*tmp;
	int		min;

	if (!node)
		return (0);
	tmp = node;
	min = node->data;
	while (tmp->next)
	{
		if (min > tmp->next->data)
			min = tmp->next->data;
		tmp = tmp->next;
	}
	return (min);
}