/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_node.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbourcy <bbourcy@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 13:34:48 by bbourcy           #+#    #+#             */
/*   Updated: 2022/04/20 14:37:37 by bbourcy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static void	new_node(t_list *node, int argc, char **argv)
{
	int	i;

	i = 1;
	while (argc > 2)
	{
		i++;
		node->next = malloc(sizeof(t_list));
		if (!node->next)
			return ;
		node = node->next;
		node->data = ft_atoi(argv[i]);
		node->id = -1;
		node->index = i;
		node->next = NULL;
		argc--;
	}
}

t_list	*create_node(int argc, char **argv)
{
	t_list	*node;
	t_list	*tmp;

	node = malloc(sizeof(t_list));
	if (!node)
		return (0);
	tmp = node;
	node->data = ft_atoi(argv[1]);
	node->id = -1;
	node->index = 1;
	node->next = NULL;
	new_node(&(*node), argc, argv);
	return (tmp);
}