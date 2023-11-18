/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfreit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 14:24:21 by josfreit          #+#    #+#             */
/*   Updated: 2023/09/10 16:28:25 by josfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	v;

	if (power == 0)
		return (1);
	else if (power <= 0)
		return (0);
	else if (power == 1)
		return (nb);
	else
	{
		v = nb;
		while (power > 1)
		{
			nb = (nb * v);
			power--;
		}
	}
	return (nb);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char *av[])
{
	int	n;
	int	p;

	if (ac == 3)
	{
		n = atoi(av[1]);
		p = atoi(av[2]);
		printf(" %i potencia %i = %i\n", n, p, ft_iterative_power(n, p));
	}
	return (0);
}*/
