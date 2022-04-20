/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbourcy <bbourcy@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 13:29:04 by bbourcy           #+#    #+#             */
/*   Updated: 2022/04/20 14:39:22 by bbourcy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static void	error(void)
{
	write (2, "Error\n", 6);
	exit(0);
}

static void	check_number(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 45)
			i++;
		if (str[i] < '0' || str[i] > '9')
			error();
		i++;
	}
}

int	ft_atoi(const char *str)
{
	int			i;
	int			neg;
	long int	nbr;

	neg = 1;
	nbr = 0;
	i = 0;
	check_number(str);
	while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n') || (str[i]
			== '\v') || (str[i] == '\f') || (str[i] == '\r'))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str [i] == '-')
			neg = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = nbr * 10 + (str[i] - '0');
		i++;
	}
	if (((nbr * neg) < -INT_MIN) || ((nbr * neg) > INT_MAX))
		error();
	return (nbr * neg);
}