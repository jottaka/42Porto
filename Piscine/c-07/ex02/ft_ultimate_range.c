/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfreit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 10:06:23 by josfreit          #+#    #+#             */
/*   Updated: 2023/11/18 11:21:05 by josfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	c;
	int	*res;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	c = max - min;
	res = malloc(sizeof(int) * (c));
	if (res == NULL)
	{
		*range = NULL;
		return (-1);
	}
	*range = res;
	c = 0;
	while (max > min)
	{
		res[c] = min;
		min++;
		c++;
	}
	return (c);
}
/*
#include <stdio.h>

int main(void)
{
	int	min;
	int	max;
	int	*ptr;
	int	size;
	
	min = 5;
	max = 10;
	size = ft_ultimate_range(&ptr, min, max);
	if (size > 0)
		for (int i = 0; ptr[i]; i++)
		printf("%i ", ptr[i]);
	else
		printf("Erro de malloc ou min > max");
	return (0);
}*/
