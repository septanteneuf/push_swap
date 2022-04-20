/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbourcy <bbourcy@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 13:35:57 by bbourcy           #+#    #+#             */
/*   Updated: 2022/04/20 15:03:51 by bbourcy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_list	*ft_lstlast(t_list *node)
{
	t_list	*tmp;

	tmp = node;
	if (node == 0)
		return (0);
	while (tmp -> next != 0)
	{
		tmp = tmp -> next;
	}
	return (tmp);
}