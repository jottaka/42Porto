/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfreit <josfreit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 15:25:06 by josfreit          #+#    #+#             */
/*   Updated: 2023/09/07 18:41:41 by josfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	c;
	int	nb;
	int	mult;

	nb = 0;
	c = 0;
	mult = 1;
	while (str[c] == 32 || (str[c] >= 9 && str[c] <= 13))
		c++;
	while (str[c] == '-' || str[c] == '+')
	{
		if (str[c] == '-')
			mult *= -1;
		c++;
	}
	while (str[c] >= '0' && str[c] <= '9')
	{
		nb = (str[c] - '0') + (nb * 10);
		c++;
	}
	return (mult * nb);
}
/*
#include <stdio.h>

int	main(int argc, char *argv[])
{
	int	c;

	c = 0;
	while (c < argc)
	{
		printf("Parametro %d: %s\n", c, argv[c]);
		c++;
	}
	if (argc == 2)
		printf("valor int= %i\n",ft_atoi(argv[1]));
	else
		printf("quantidade de argumentos errada!!!");
	return (0);
}*/
