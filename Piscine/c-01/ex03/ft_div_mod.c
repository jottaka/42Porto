/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfreit <josfreit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 15:25:06 by josfreit          #+#    #+#             */
/*   Updated: 2023/08/31 12:41:49 by josfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = (a / b);
	*mod = (a % b);
}
/*
int	main(void)
{
	int	*ptr_c;
	int	*ptr_d;
	int	c;
	int	d;

	c = 27;
	d = 5;	
	ptr_c = &c;
	ptr_d = &d;
	printf("%d dividido por %d\n", c, d);
	ft_div_mod(c, d, ptr_c, ptr_d);
	printf("= div %d e mod %d\n", c, d);
	return (0);
}*/
