/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfreit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 09:55:25 by josfreit          #+#    #+#             */
/*   Updated: 2023/11/18 11:19:54 by josfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	c;
	int	*res;

	if (min >= max)
	{
		return (0);
	}
	c = max - min;
	res = (int *)malloc(sizeof(int) * (c));
	if (res == NULL)
	{
		return (NULL);
	}
	c = 0;
	while (max > min)
	{
		res[c] = min;
		min++;
		c++;
	}
	return (res);
}
/*
#include <stdio.h>

int main(void)
{
	int	min;
	int	max;
	int	*ptr;
	int	size;

	min = 7;
	max = 10;
	size = max - min;
	ptr = ft_range(min, max);
	if(ptr != NULL)
	{
		for (int i = 0; ptr[i]; i++)
			printf("%i ", ptr[i]);
	}
	else
		printf("Erro de malloc ou min > max");
}*/

