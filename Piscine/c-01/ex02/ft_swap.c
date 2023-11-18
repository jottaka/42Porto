/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfreit <josfreit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 15:25:06 by josfreit          #+#    #+#             */
/*   Updated: 2023/08/31 15:59:00 by josfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
/*
int	main(void)
{
	int	v1;
	int	v2;

	v1 = 47;
	v2 = 42;
	printf("v1 antes= %d\n", v1);
	printf("v2 antes= %d\n", v2);
	ft_swap(&v1, &v2);
	printf("v1 novo= %d\n", v1);
	printf("v2 novo= %d", v2);
	return (0);
}*/
