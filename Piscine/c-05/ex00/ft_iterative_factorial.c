/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfreit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 14:24:21 by josfreit          #+#    #+#             */
/*   Updated: 2023/09/09 16:23:09 by josfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	v;

	v = 1;
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (1);
	while (nb > 1)
		v *= nb--;
	return (v);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char *av[])
{
	int	c;

	if (ac == 2)
	{
		c = atoi(av[ac - 1]);
		printf("fatorial de %i = %i\n", c, ft_iterative_factorial(c));
	}
	return (0);
}*/
