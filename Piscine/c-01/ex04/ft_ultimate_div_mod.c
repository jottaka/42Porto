/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfreit <josfreit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 15:25:06 by josfreit          #+#    #+#             */
/*   Updated: 2023/08/31 19:26:45 by josfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
*/
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	aux;

	aux = (*a % *b);
	*a = (*a / *b);
	*b = aux;
}
/*
int	main(void)
{
	int	c;
	int	d;
	int	*ptr_c;
	int	*ptr_d;

	c = 42;
	d = 8;
	ptr_c = &c;
	ptr_d = &d;
	printf("%d divides by %d\n", c, d);
	ft_ultimate_div_mod(ptr_c, ptr_d);
	printf("= div %d e mod %d\n", c, d);
	return (0);
}*/
