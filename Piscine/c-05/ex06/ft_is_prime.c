/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfreit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 18:42:10 by josfreit          #+#    #+#             */
/*   Updated: 2023/09/10 18:52:20 by josfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	c;

	c = 2;
	if (nb < 2)
		return (0);
	while (c <= nb / c)
	{
		if (nb % c == 0)
			return (0);
		c++;
	}
	return (1);
}
/*
#include <stdlib.h>
#include <stdio.h>

int	main(int ac, char *av[])
{
	if (ac == 2)
	{
		if (ft_is_prime(atoi(av[1])) == 1)
			printf("Numero %s primo", av[1]);
		else
			printf("Numero %s nao primo", av[1]);
	}
	return (0);
}*/
