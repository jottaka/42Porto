/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfreit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 14:24:21 by josfreit          #+#    #+#             */
/*   Updated: 2023/09/10 16:33:55 by josfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	c;
	int	v;

	c = 1;
	v = 1;
	while (nb > 0)
	{
		nb = nb - c;
		c = c + 2;
		if (nb == 0)
			return (v);
		v++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char *av[])
{
	int	n;

	if (ac == 2)
	{
		n = ft_sqrt(atoi(av[1]));
		if (n != 0)
			printf("raiz quadrada inteira de %s =  %i\n", av[1], n);
		else
			printf("raiz 0 ou numero imaginario");
	}
	return (0);
}*/
