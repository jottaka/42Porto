/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfreit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 14:24:21 by josfreit          #+#    #+#             */
/*   Updated: 2023/09/09 17:39:31 by josfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index <= 2)
		return (1);
	else
	{
		index = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
		return (index);
	}
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char *av[])
{
	int	n;

	if (ac == 2)
	{
		n = atoi(av[1]);
		printf("elemento %i da seq de Fibonacci = %i\n", n, ft_fibonacci(n));
	}
	return (0);
}*/
