/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbourcy <bbourcy@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 13:27:13 by bbourcy           #+#    #+#             */
/*   Updated: 2022/04/20 16:03:18 by bbourcy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <limits.h>
# include <stdio.h>
# include <unistd.h>

typedef struct	s_list
{
	int				data;
	int				id;
	int				index;
	struct s_list	*next;
}				t_list;

//	check_error.c
int		check_double(t_list *node);
int		check_sort(t_list *node);
int		check(t_list *node);

//	create_node.c
t_list	*create_node(int argc, char **argv);

//	ft_atoi.c
int		ft_atoi(const char *str);

//	ft_lstlast.c
t_list	*ft_lstlast(t_list *node);

//	main.c
int		main(int argc, char **argv);

//	ps.c
void	pa(t_list **stack_a, t_list **stack_b);
void	pb(t_list **stack_a, t_list **stack_b);
void	sa(t_list **stack_a);
void	sb(t_list **stack_b);
void	ss(t_list *stack_a, t_list *stack_b);

//	r.c
void	ra(t_list **stack_a);
void	rb(t_list **stack_b);
void	rr(t_list *stack_a, t_list *stack_b);

//	rr.c
void	rra(t_list **stack_a);
void	rrb(t_list **stack_b);
void	rrr(t_list *stack_a, t_list *stack_b);

//	sort_big.c
void	sort_100(t_list **stack_a, t_list **stack_b);
void	sort_500(t_list **stack_a, t_list **stack_b);

//	sort small.c
void	sort_two(t_list **stack_a);
void	sort_three(t_list **stack_a);
void	sort_four_six(t_list **stack_a, t_list **stack_b);

//	utils.c
int		len_node(t_list *node);
void	sort_id(t_list **stack, int argc);
int		min_data(t_list *node);

#endif